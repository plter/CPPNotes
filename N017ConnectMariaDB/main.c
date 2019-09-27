#include <mysql.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void show_error(MYSQL *mysql) {
    printf("Error(%d) [%s] \"%s\"", mysql_errno(mysql),
           mysql_sqlstate(mysql),
           mysql_error(mysql));
    mysql_close(mysql);
    exit(-1);
}

int main(int argc, char *argv[]) {
    MYSQL *mysql;
    const char *query;
    MYSQL_RES *result;

    mysql = mysql_init(NULL);
    if (!mysql_real_connect(mysql, "127.0.0.1", "root", "example", "mydb", 0, "/tmp/mysql.sock", 0))
        show_error(mysql);

    mysql_set_character_set(mysql, "utf8mb4");

    /* Affected rows after select */
    query = "SELECT * FROM user order by id DESC";
    if (mysql_real_query(mysql, query, strlen(query)))
        show_error(mysql);
    result = mysql_store_result(mysql);

    MYSQL_FIELD *field;

    int columns = 0;
    while ((field = mysql_fetch_field(result))) {
        printf("%s\t", field->name);
        columns++;
    }
    printf("\n");

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < columns; ++i) {
            printf("%s\t", row[i]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Affected_rows after SELECT and storing result set: %lu\n",
           (unsigned long) mysql_affected_rows(mysql));
    mysql_free_result(result);

    mysql_close(mysql);
    return 0;
}
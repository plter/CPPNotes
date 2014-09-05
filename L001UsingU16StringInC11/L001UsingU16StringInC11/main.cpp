//
//  main.cpp
//  L001UsingU16StringInC11
//
//  Created by plter on 9/5/14.
//  Copyright (c) 2014 plter. All rights reserved.
//

#include <iostream>
#include <codecvt>

int main(int argc, const char * argv[])
{

    //This line show how to create u16 string
    std::u16string ustr = u"这是汉字";
    
    //This line show how to create the converter
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> cvt;
    
    //This line show how to print the u16string to console
    std::cout<<cvt.to_bytes(ustr)<<"\n";
    
    return 0;
}


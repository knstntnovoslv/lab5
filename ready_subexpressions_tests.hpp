#pragma once
#include "SubExpressionArray.hpp"
#include "SubExpressionList.hpp"
#include "HelpList.hpp"
void ready_subexpression_string_array_test(){
    cout<<"Find subexpression in string by array test"<<"\n";
    string st1 = string("abadef");
    cout<<"Tested string: "<<st1<<"\n";
    SubExpressionArray<string, dict<HelpArray<string>, int>, int> test =
            SubExpressionArray<string, dict<HelpArray<string>, int>, int>(st1,1, 4);
    test.print();
}
void ready_subexpression_string_list_test(){
    cout<<"Find subexpression in string by list test"<<"\n";
    string st1 = string("abadef");
    cout<<"Tested string: "<<st1<<"\n";
    SubExpressionList<string, dict<HelpList<string>, int>, int> test =
            SubExpressionList<string, dict<HelpList<string>, int>, int>(st1,1, 4);
    test.print();
}
void ready_subexpression_int_array_test(){
    cout<<"Find subexpression in sequence by array test"<<"\n";
    int test[10] = {1, 1, 2, 3, 7, 8, 5, 4, 6, 9};
    ArraySequence<int> atest = ArraySequence<int>(test, 10);
    Sequence<int>* pointer = &atest;
    SubExpressionArray<HelpArray<int>, dict<HelpArray<int>, int>, int> test2 =
            SubExpressionArray<HelpArray<int>, dict<HelpArray<int>, int>, int>(pointer,1, 4);
    cout<<"Tested Sequence:"<<"\n";
    atest.Print();
    cout<<"\n";
    test2.printforsequence();
}

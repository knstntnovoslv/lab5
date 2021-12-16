#pragma once
#include "Paginator.hpp"
void paginator_array_test(){
    string test = string("abcdef ghdf");
    cout<<"Tested string: "<<test<<"\n";
    paginator_array<HelpArray<string>, int> alpha =
            paginator_array<HelpArray<string>, int>(test, 4);
    cout<<"Pagination:"<<"\n";
    alpha.print();
}


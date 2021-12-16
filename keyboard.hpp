#pragma once
#include "Hist.hpp"
#include "Paginator.hpp"
#include "SubExpressionArray.hpp"
#include "SubExpressionList.hpp"
#include "ArraySequence.hpp"
template<typename T>
hist<HelpArray<T>, T> keyboard_hist_parts_array(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;

    cout<<"Input parts amount:"<<"\n";
    int parts;
    cin>>parts;
    T* space = new T[dimension];
    Sequence<T>* pointer;
    cout<<"Input elements: "<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ArraySequence<T> arr = ArraySequence<T>(space, dimension);
    pointer = &arr;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(parts, pointer);
    return alpha;
}
template<typename T>
hist<HelpArray<T>, T> keyboard_hist_count_elements_array(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    cout<<"Input elements"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ArraySequence<T> arr = ArraySequence<T>(space, dimension);
    Sequence<T> *pointer = &arr;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer);
    return alpha;
}
template<typename T>
hist<HelpArray<T>, T> hist_count_all_elements_in_group_keyboard_array(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    Sequence<T> *pointer;
    cout<<"Input elements:"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ArraySequence<T> arr = ArraySequence<T>(space, dimension);
    pointer = &arr;
    cout<<"Input ranges: "<<"\n";
    cout<<"First range: ";
    T first_range;
    cin>>first_range;
    cout<<"Second range: ";
    T second_range;
    cin>>second_range;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer, first_range, second_range, true);
    return alpha;
}

template<typename T>
hist<HelpArray<T>, T> hist_count_every_elements_in_group_keyboard_array(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    Sequence<T> *pointer;
    cout<<"Input elements:"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ArraySequence<T> arr = ArraySequence<T>(space, dimension);
    pointer = &arr;
    cout<<"Input ranges: "<<"\n";
    cout<<"First range: ";
    T first_range;
    cin>>first_range;
    cout<<"Second range: ";
    T second_range;
    cin>>second_range;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer, first_range, second_range, false);
    return alpha;
}

template<typename T>
hist<HelpArray<T>, T> keyboard_hist_parts_list(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;

    cout<<"Input parts amount:"<<"\n";
    int parts;
    cin>>parts;
    T* space = new T[dimension];
    Sequence<T>* pointer;
    cout<<"Input elements: "<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ListSequence<T> arr = ListSequence<T>(space, dimension);
    pointer = &arr;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(parts, pointer);
    return alpha;
}
template<typename T>
hist<HelpArray<T>, T> keyboard_hist_count_elements_list(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    cout<<"Input elements"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ListSequence<T> arr = ListSequence<T>(space, dimension);
    Sequence<T> *pointer = &arr;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer);
    return alpha;
}
template<typename T>
hist<HelpArray<T>, T> hist_count_all_elements_in_group_keyboard_list(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    Sequence<T> *pointer;
    cout<<"Input elements:"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ListSequence<T> arr = ListSequence<T>(space, dimension);
    pointer = &arr;
    cout<<"Input ranges: "<<"\n";
    cout<<"First range: ";
    T first_range;
    cin>>first_range;
    cout<<"Second range: ";
    T second_range;
    cin>>second_range;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer, first_range, second_range, true);
    return alpha;
}

template<typename T>
hist<HelpArray<T>, T> hist_count_every_elements_in_group_keyboard_list(){
    cout<<"Input dimension:"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    Sequence<T> *pointer;
    cout<<"Input elements:"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ListSequence<T> arr = ListSequence<T>(space, dimension);
    pointer = &arr;
    cout<<"Input ranges: "<<"\n";
    cout<<"First range: ";
    T first_range;
    cin>>first_range;
    cout<<"Second range: ";
    T second_range;
    cin>>second_range;
    hist<HelpArray<T>, T> alpha = hist<HelpArray<T>, T>(pointer, first_range, second_range, false);
    return alpha;
}

paginator_array<HelpArray<string>, int> keyboard_pagination(){
    string st;
    cout<<"Input string:"<<"\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, st);
    int sumbols_on_page;
    cout<<"Input sumbols on page:"<<"\n";
    cin>>sumbols_on_page;
    paginator_array<HelpArray<string>, int> pag = paginator_array<HelpArray<string>, int>(st, sumbols_on_page);
    return pag;
}
template<typename T>
SubExpressionArray<string, dict<HelpArray<string>, T>, T> keyboard_string_subexpression_test_array(){
    string st;
    cout<<"Input string:"<<"\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, st);
    cout<<"Input min and max length of subexpression:"<<"\n";
    int min, max;
    cout<<"Min length: ";
    cin>>min;
    cout<<"Max length: ";
    cin>>max;
    SubExpressionArray<string, dict<HelpArray<string>, T>, T> res = SubExpressionArray<string, dict<HelpArray<string>, T>, T>(st, min, max);
    return res;
}

template<typename T>
SubExpressionArray<HelpArray<T>, dict<HelpArray<T>, T>, T> keyboard_subexpression_for_sequence(){
    cout<<"Input Sequence dimension"<<"\n";
    int dimension;
    cin>>dimension;
    T* space = new T[dimension];
    Sequence<T> *pointer;
    cout<<"Input elements:"<<"\n";
    for(int i = 0; i < dimension; i++){
        T el;
        cin>>el;
        space[i] = el;
    }
    ArraySequence<T> arr = ArraySequence<T>(space, dimension);
    pointer = &arr;
    cout<<"Input min and max length of subexpression:"<<"\n";
    int min, max;
    cout<<"Min length: ";
    cin>>min;
    cout<<"Max length: ";
    cin>>max;
    SubExpressionArray<HelpArray<T>, dict<HelpArray<T>, T>, T> res = SubExpressionArray<HelpArray<T>, dict<HelpArray<T>, T>, T>(pointer, min, max);
    return res;
}

template<typename T>
SubExpressionList<string, dict<HelpList<string>, T>, T> keyboard_string_subexpression_test_list(){
    string st;
    cout<<"Input string:"<<"\n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, st);
    cout<<"Input min and max length of subexpression:"<<"\n";
    int min, max;
    cout<<"Min length: ";
    cin>>min;
    cout<<"Max length: ";
    cin>>max;
    SubExpressionList<string, dict<HelpList<string>, T>, T> res = SubExpressionList<string, dict<HelpList<string>, T>, T>(st, min, max);
    return res;
}
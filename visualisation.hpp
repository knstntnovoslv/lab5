#pragma once
#include "Hist.hpp"
#include "Paginator.hpp"
#include "SubExpressionArray.hpp"
#include "SubExpressionList.hpp"
#include "sequence.hpp"
#include<cstdlib>
#include <cassert>
#include <chrono>
#include "fstream"
#include "CreateArray.hpp"
#include "ArraySequence.hpp"
//Для гистограммы
float division_by_group_help(Sequence<int>* c){
    int parts = 5;
    auto start_time = chrono::steady_clock::now();
    hist<HelpArray<int>, int> r(parts, c);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

float count_all_elements_help(Sequence<int>* c){
    int parts = 5;
    auto start_time = chrono::steady_clock::now();
    hist<HelpArray<int>, int> r(c);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}
float count_all_elements_in_group_help(Sequence<int>* c){
    int first = (*c)[1];
    int last = (*c)[c->GetSize() - 1];
    auto start_time = chrono::steady_clock::now();
    hist<HelpArray<int>, int> r(c, first, last, true);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}
float count_every_elements_in_group_help(Sequence<int>* c){
    int first = (*c)[1];
    int last = (*c)[c->GetSize() - 1];
    auto start_time = chrono::steady_clock::now();
    hist<HelpArray<int>, int> r(c, first, last, false);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}
//для пагинации
float paginator_help(string alpha){
    auto start_time = chrono::steady_clock::now();
    paginator_array<HelpArray<string>, int> r(alpha, 5);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

//для subexpressions
float subexpression_string_array_help(string alpha){
    auto start_time = chrono::steady_clock::now();
    SubExpressionArray<string, dict<HelpArray<string>, int>, int> test =
            SubExpressionArray<string, dict<HelpArray<string>, int>, int>(alpha, 1, 5);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

float subexpression_sequence_array_help(Sequence<int>* c){
    auto start_time = chrono::steady_clock::now();
    SubExpressionArray<HelpArray<int>, dict<HelpArray<int>, int>, int> test2 =
            SubExpressionArray<HelpArray<int>, dict<HelpArray<int>, int>, int>(c, 1, 5);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

float subexpression_string_list_help(string alpha){
    auto start_time = chrono::steady_clock::now();
    SubExpressionList<string, dict<HelpList<string>, int>, int> test =
            SubExpressionList<string, dict<HelpList<string>, int>, int>(alpha, 1, 5);
    auto end_time = chrono::steady_clock::now();
    float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}
// Запись в файлы
void division_by_group_hist_files(){
    float time;
    ofstream fout;
    fout.open("Division_by_parts.csv");
    fout<<"division_by_parts"<<"\n";
    for(int i = 10; i < 100; i+=10){
        int* arr = MakeRandomArray<int>(i);
        ArraySequence<int> c = ArraySequence<int>(arr, i);
        Sequence<int>* pointer = &c;
        time = division_by_group_help(pointer);
        fout<<time<<"\n";
    }
    fout.close();
}

void count_all_elements_hist_files(){
    float time;
    ofstream fout;
    fout.open("Count_all_elements.csv");
    fout<<"count_all_elements"<<"\n";
    for(int i = 10; i < 100; i+=10){
        int* arr = MakeRandomArray<int>(i);
        ArraySequence<int> c = ArraySequence<int>(arr, i);
        Sequence<int>* pointer = &c;
        time = count_all_elements_help(pointer);
        fout<<time<<"\n";
    }
    fout.close();
}
void count_all_elements_in_group_files(){
    float time;
    ofstream fout;
    fout.open("Count_all_elements_in_group.csv");
    fout<<"count_all_elements_in_group"<<"\n";
    for(int i = 10; i < 100; i+=10){
        int* arr = MakeRandomArray<int>(i);
        ArraySequence<int> c = ArraySequence<int>(arr, i);
        Sequence<int>* pointer = &c;
        time = count_all_elements_in_group_help(pointer);
        fout<<time<<"\n";
    }
    fout.close();
}

void count_every_elements_in_group_files(){
    float time;
    ofstream fout;
    fout.open("Count_every_elements_in_group.csv");
    fout<<"count_every_elements_in_group"<<"\n";
    for(int i = 10; i < 100; i+=10){
        int* arr = MakeRandomArray<int>(i);
        ArraySequence<int> c = ArraySequence<int>(arr, i);
        Sequence<int>* pointer = &c;
        time = count_every_elements_in_group_help(pointer);
        fout<<time<<"\n";
    }
    fout.close();
}

void paginator_files(){
    float time;
    string st = string("aaaaa");
    ofstream fout;
    fout.open("Paginator.csv");
    fout<<"pagination"<<"\n";
    for(int i = 5; i < 100; i+=5){
        st+="aaaaa";
        time = paginator_help(st);
        fout<<time<<"\n";
    }
    fout.close();
}
//subexpression
void subexpression_array_string_files(){
    float time;
    string st = string("aaaaa");
    ofstream fout;
    fout.open("subexpression_string_array.csv");
    fout<<"subexpression_string_array"<<"\n";
    for(int i = 10; i < 100; i+=10){
        st+="aaaaa";
        time = subexpression_string_array_help(st);
        fout<<time<<"\n";
    }
    fout.close();
}
void subexpression_array_sequence_files(){
    float time;
    ofstream fout;
    fout.open("subexpression_array_sequence.csv");
    fout<<"subexpression_array_sequence"<<"\n";
    for(int i = 10; i < 100; i+=10){
        int* arr = MakeRandomArray<int>(i);
        ArraySequence<int> c = ArraySequence<int>(arr, i);
        Sequence<int>* pointer = &c;
        time = subexpression_sequence_array_help(pointer);
        fout<<time<<"\n";
    }
    fout.close();
}
void subexpression_list_string_files(){
    float time;
    string st = string("aaaaa");
    ofstream fout;
    fout.open("subexpression_string_list.csv");
    fout<<"subexpression_string_list"<<"\n";
    for(int i = 10; i < 100; i+=5){
        st+="aaaaa";
        time = subexpression_string_list_help(st);
        fout<<time<<"\n";
    }
    fout.close();
}

void files(){
    division_by_group_hist_files();
    count_all_elements_hist_files();
    count_all_elements_in_group_files();
    count_every_elements_in_group_files();
    paginator_files();
    subexpression_array_string_files();
    subexpression_array_sequence_files();
    subexpression_list_string_files();
}
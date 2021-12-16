#pragma once
#include "Paginator.hpp"
float pagination_time_test(int dimension){
    string st;
    for(int i = 0; i < dimension; i++){
        st.push_back('a');
    }
    auto start_time = chrono::steady_clock::now();
    paginator_array<HelpArray<string>, int> pagi = paginator_array<HelpArray<string>, int>(st, 10);
    auto end_time = chrono::steady_clock::now();
    float time =  chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}
void print_result_pagination(float time){
    cout<<"Pagination time: "<<time<<" microseconds"<<"\n";
}
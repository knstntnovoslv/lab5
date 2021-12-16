#pragma once
#include "HelpList.hpp"
#include "Dict.hpp"
#include <string>
#include "sequence.hpp"
template<typename T1, typename T2, typename T3>
class SubExpressionList{
private:
    HelpList<T1> subexpressions; // T1 - то где ищем подвыражения
    T2 amount;
public:
    SubExpressionList<T1, T2, T3>(string alpha, int min, int max){
        HelpList<T1> res;
        if (min < max && alpha.size() >= max) {
            string prom = string();
            for (int count = 0; count <= alpha.size() - min; count++) {
                if(count <= alpha.size() - max) {
                    for (int j = min; j <= max; j++) {
                        for (int i = count; i < j + count; i++) {
                            prom.push_back(alpha[i]);
                        }
                        res.Append(prom);
                        prom.clear();
                    }
                }
                else{
                    for(int j = min; j < alpha.size() - count + 1; j++){
                        for(int i = count; i < count + j; i++){
                            prom.push_back(alpha[i]);
                        }
                        res.Append(prom);
                        prom.clear();
                    }
                }
            }
        }
        subexpressions = res;
        T2 result;
        int count;
        for(int i = 0; i < subexpressions.GetSize(); i++){
            count = 1;
            for(int j = 0; j < subexpressions.GetSize(); j++){
                if(subexpressions[i] == subexpressions[j] && i != j){
                    count++;
                }
            }
            HelpList<string> help = HelpList<string>(subexpressions[i]);
            dict_node<HelpList<string>, int> h = dict_node<HelpList<string>, int>(help, count);
            if(i == 0){
                result.setel(0, subexpressions[i], count);
            }
            result = result.SetAdd(h);
        }
        amount = result;
    }

    void print(){
        subexpressions.print();
        cout<<"\n";
        amount.print();
        cout<<"\n";
        cout<<"Max amount of repeated subexpression: "<<amount.FindMaxValue();
    }

};

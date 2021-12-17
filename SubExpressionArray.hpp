#pragma once
#include "HelpArray.hpp"
#include "Dict.hpp"
#include <string>
#include "sequence.hpp"
template<typename T1, typename T2, typename T3>
class SubExpressionArray{
private:
    HelpArray<T1> subexpressions; // T1 - то где ищем подвыражения
    T2 amount;       //Dict<<то где ищем подстроки>, <int>>
public:
    SubExpressionArray<T1, T2, T3>(string alpha, int min, int max){
        HelpArray<T1> res;
        if (min < max && alpha.size() >= max) {
            string prom = string();
            for (int count = 0; count <= alpha.size() - min; count++) {
                if(count <= alpha.size() - max) {
                    for (int j = min; j <= max; j++) {
                        for (int i = count; i < j + count; i++) {
                            prom.push_back(alpha[i]);
                        }
                        res.append(prom);
                        prom.clear();
                    }
                }
                else{
                    for(int j = min; j < alpha.size() - count + 1; j++){
                        for(int i = count; i < count + j; i++){
                            prom.push_back(alpha[i]);
                        }
                        res.append(prom);
                        prom.clear();
                    }
                }
            }
        }
        subexpressions = res;
        T2 result;
        int count;
        for(int i = 0; i < subexpressions.GetDim(); i++){
            count = 1;
            for(int j = 0; j < subexpressions.GetDim(); j++){
                if(subexpressions[i] == subexpressions[j] && i != j){
                    count++;
                }
            }
            HelpArray<string> help = HelpArray<string>(subexpressions[i]);
            dict_node<HelpArray<string>, int> h = dict_node<HelpArray<string>, int>(help, count);
            if(i == 0){
                result.setel(0, subexpressions[i], count);
            }
            result = result.SetAdd(h);
        }
        amount = result;
    }
    SubExpressionArray<T1, T2, T3>(Sequence<T3>* alpha, int min, int max){ //T1-HelpArray<T3>
        HelpArray<T1> res;
        if(min < max && alpha->GetSize() > max){
            HelpArray<T3> prom;
            for(int count = 0; count <= alpha->GetSize() - min; count++){
                if(count <= alpha->GetSize() - max){
                    for (int j = min; j <= max; j++) {
                        for (int i = count; i < j + count; i++) {
                            prom.append((*alpha)[i]);
                        }
                        res.append(prom);
                        prom = HelpArray<T3>();
                    }
                }
                else{
                    for(int j = min; j < alpha->GetSize() - count + 1; j++){
                        for(int i = count; i < count + j; i++){
                            prom.append((*alpha)[i]);
                        }
                        res.append(prom);
                        prom = HelpArray<T3>();
                    }
                }
            }
        }
        subexpressions = res;
        T2 result;
        int count;
        dict_node<T1, int> h;
        for(int i = 0; i < subexpressions.GetDim(); i++){
            count = 1;
            for(int j = 0; j < subexpressions.GetDim(); j++){
                if(subexpressions[i] == subexpressions[j] && i != j){
                    count++;
                }
            }
            h = dict_node<T1, int>(subexpressions[i], count);
            if(i == 0){
                result.setel(i, subexpressions[i], count);
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
    void printforsequence(){
        cout<<"[";
        for(int i = 0; i < subexpressions.GetDim(); i++) {
            subexpressions[i].print();
            if(i < subexpressions.GetDim() - 1){
                cout<<",";
            }
        }
        cout<<"]";
        cout<<"\n";
        amount.print();
        cout<<"\n";
        cout<<"Max amount of repeated subexpression: "<<amount.FindMaxValue();
    }
};

#pragma once
#include "Dict.hpp"
#include "string"
#include "HelpArray.hpp"
#include "vector"
template<typename T1, typename T2>
class paginator_array{
private:
    dict<T1, T2> pages; //T1-HelpArray<string> T2-int
public:
    paginator_array(string alpha, int sumbols_amount) {
        HelpArray<T1> words;
        HelpArray<string> word;
        string med;
        int checker = 0;
        for(int i = 0; i < alpha.size(); i++){
            if(alpha[i] == ' ' || i == alpha.size() - 1) {
                for(int j = checker; j < i; j++) {
                    med.push_back(alpha[j]);
                }
                if(i == alpha.size() - 1 && alpha[i] != ' '){
                    med.push_back(alpha[i]);
                }
                checker = i+1;
                if(i!= alpha.size() - 1) {
                    word.append(med + " ");
                    med.clear();
                }
                else{
                    word.append(med);
                    med.clear();
                }
                words.append(word);
                word = HelpArray<string>();
            }

        }
        int str_len = 0;
        int page = 1;
        int page1_size = sumbols_amount / 2;
        int page10_size = 3*sumbols_amount / 4;
        //string med;
        string help;
        HelpArray<int> pag;
        for(int i = 0; i < words.GetDim(); i++){
            help = string(words[i].get(0));
            for(int j = 0; j < words[i].get(0).size(); j++){
                if(page == 1 && str_len > sumbols_amount / 2){
                    if(help[j] != ' ') {
                        page++;
                    }
                }
                else if(str_len >= (page - 1)*sumbols_amount + page1_size)  {
                    if(help[j] != ' ') {
                        page++;
                    }
                }
                else if(page % 10 == 0 && str_len >= (page - 2)*sumbols_amount + page1_size + page10_size) {
                    if(help[j] != ' ') {
                        page++;
                    }
                }
                str_len++;
            }
            pag.append(page);
        }
        for(int i = 0; i < words.GetDim(); i++){
            pages.setel(i, words[i], pag[i]);
            pages.setdim(i + 1);
        }

    }
    void print(){
        pages.print();
    }
};
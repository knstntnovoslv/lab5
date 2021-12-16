#include <iostream>
#include "HelpArray.hpp"
#include "DictNode.hpp"
#include "Dict.hpp"
#include "ArraySequence.hpp"
#include "Hist.hpp"
#include "HelpList.hpp"
#include "visualisation.hpp"
#include "SubExpressionArray.hpp"
#include "SubExpressionList.hpp"
#include "Paginator.hpp"
#include "ready_hist_tests.hpp"
#include "ready_subexpressions_tests.hpp"
#include "ready_paginator_tests.hpp"
#include "time_hist_test.hpp"
#include "pagination_time_test.hpp"
#include "keyboard.hpp"
int main() {
   int zero = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    int alpha = 0;
    int fourth = 0;
    int fifth = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    int omega = 0;
    int mephi = 0;
    int ten = 0;
    int eleven = 0;
    int per = 0;
    int sub = 0;
    int t = 0;
    int r = 0;
    int s = 0;
    while (first != 4) {
        cout << endl << "Choose Type:" << endl;
        cout << "1. Hist" << endl << "2. Pagination" << endl << "3. Subexpression" << endl << "4. Exit"
             << "\n";
        cin >> first;
        cout << "\n";
        switch (first) {
            case 1: {
                second = 0;
                while (second != 3) {
                    cout << endl << "Choose container:" << endl;
                    cout << "1. Array" << endl << "2. List" << endl << "3. back" << endl;
                    cin >> second;
                    cout << "\n";
                    switch (second) {
                        case 1: {
                            third = 0;
                            while (third != 4) {
                                cout << endl << "Choose test type:" << endl;
                                cout << "1. Ready test" << endl << "2. Time test" << endl << "3. Keyboard test" << endl
                                     << "4. Back"<<endl;
                                cin >> third;
                                cout << "\n";
                                switch(third){
                                    case 1:{
                                        ready_hist_int_array_test();
                                        break;
                                    }
                                    case 2:{
                                        print_result_time_for_hist(time_test_for_int_array(100));
                                        break;
                                    }
                                    case 3:{
                                        alpha = 0;
                                        while(alpha != 5){
                                            cout << endl << "Choose test type:" << endl;
                                            cout << "1. Division by parts test" << endl << "2. Count elements test" << endl << "3. Count all elements in group test" << endl
                                                 << "4. Count every elements in group test"<<endl<<"5. Back"<<endl;
                                            cin >> alpha;
                                            switch(alpha){
                                                case 1:{
                                                    omega = 0;
                                                    while(omega != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> omega;
                                                        switch(omega){
                                                            case 1:{
                                                                keyboard_hist_parts_array<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                keyboard_hist_parts_array<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 2:{
                                                    fourth = 0;
                                                    while(fourth != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> fourth;
                                                        switch(fourth){
                                                            case 1:{
                                                                keyboard_hist_count_elements_array<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                keyboard_hist_count_elements_array<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 3:{
                                                    fifth = 0;
                                                    while(fifth != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> fifth;
                                                        switch(fifth){
                                                            case 1:{
                                                                hist_count_all_elements_in_group_keyboard_array<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                hist_count_all_elements_in_group_keyboard_array<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 4:{
                                                    six = 0;
                                                    while(six != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> six;
                                                        switch(six){
                                                            case 1:{
                                                                hist_count_every_elements_in_group_keyboard_array<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                hist_count_every_elements_in_group_keyboard_array<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 5:{
                                                    break;
                                                }
                                                default:
                                                    cout<<"Enter a number from the list";
                                                    break;
                                            }
                                        }
                                        break;
                                    }
                                    case 4:{
                                        break;
                                    }
                                    default:
                                        cout<<"Enter a number from the list";

                                }
                            }
                            break;
                        }
                        case 2:{
                            seven = 0;
                            while(seven != 4){
                                cout << endl << "Choose test type:" << endl;
                                cout << "1. Ready test" << endl << "2. Time test" << endl << "3. Keyboard test" << endl
                                     << "4. Back"<<endl;
                                cin >> seven;
                                cout << "\n";
                                switch(seven){
                                    case 1:{
                                        ready_hist_int_list_test();
                                        break;
                                    }
                                    case 2:{
                                        print_result_time_for_hist(time_test_for_int_list(100));
                                        break;
                                    }
                                    case 3:{
                                        eight = 0;
                                        while(eight != 5){
                                            cout << endl << "Choose test type:" << endl;
                                            cout << "1. Division by parts test" << endl << "2. Count elements test" << endl << "3. Count all elements in group test" << endl
                                                 << "4. Count every elements in group test"<<endl<<"5. Back"<<endl;
                                            cin >> eight;
                                            switch(eight){
                                                case 1:{
                                                    nine = 0;
                                                    while(nine != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> nine;
                                                        switch(nine){
                                                            case 1:{
                                                                keyboard_hist_parts_list<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                keyboard_hist_parts_list<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 2:{
                                                    mephi = 0;
                                                    while(mephi != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> mephi;
                                                        switch(mephi){
                                                            case 1:{
                                                                keyboard_hist_count_elements_list<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                keyboard_hist_count_elements_list<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 3:{
                                                    ten = 0;
                                                    while(ten != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> ten;
                                                        switch(ten){
                                                            case 1:{
                                                                hist_count_all_elements_in_group_keyboard_list<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                hist_count_all_elements_in_group_keyboard_list<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 4:{
                                                    eleven = 0;
                                                    while(eleven != 3){
                                                        cout << endl << "Choose type:" << endl;
                                                        cout << "1. Int" << endl << "2. Float" << endl << "3. Back" << endl;
                                                        cin >> eleven;
                                                        switch(eleven){
                                                            case 1:{
                                                                hist_count_every_elements_in_group_keyboard_list<int>().print();
                                                                break;
                                                            }
                                                            case 2:{
                                                                hist_count_every_elements_in_group_keyboard_list<float>().print();
                                                                break;
                                                            }
                                                            case 3:{
                                                                break;
                                                            }
                                                            default:
                                                                cout<<"Enter a number from the list";
                                                                break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 5:{
                                                    break;
                                                }
                                                default:
                                                    cout<<"Enter a number from the list";
                                                    break;
                                            }
                                        }
                                        break;
                                    }

                                }
                            }
                            break;
                        }
                    }
                }
                break;
            }
            case 2:{
                per = 0;
                while(per != 4){
                    cout << endl << "Choose test type:" << endl;
                    cout << "1. Ready test" << endl << "2. Time test" << endl << "3. Keyboard test" << endl
                         << "4. Back"<<endl;
                    cin >> per;
                    cout << "\n";
                    switch(per){
                        case 1:{
                            paginator_array_test();
                            break;
                        }
                        case 2:{
                            print_result_pagination(pagination_time_test(100));
                            break;
                        }
                        case 3:{
                            keyboard_pagination().print();
                            break;
                        }
                        case 4:{
                            break;
                        }
                        default:
                            cout<<"Enter a number from the list";
                            break;
                    }
                }
                break;
            }
            case 3:{
                sub = 0;
                while (sub != 3) {
                    cout << endl << "Choose container:" << endl;
                    cout << "1. Array" << endl << "2. List" << endl << "3. back" << endl;
                    cin >> sub;
                    cout << "\n";
                    switch(sub){
                        case 1:{
                            t = 0;
                            while(t != 3){
                                cout << endl << "Choose container:" << endl;
                                cout << "1. String" << endl << "2. Sequence" << endl << "3. back" << endl;
                                cin >> t;
                                cout << "\n";
                                switch(t){
                                    case 1:{
                                        r = 0;
                                        while(r != 3){
                                            cout << endl << "Choose type of test:" << endl;
                                            cout << "1. Ready test" << endl << "2. Keyboard test" << endl << "3. back" << endl;
                                            cin >> r;
                                            cout << "\n";
                                            switch(r){
                                                case 1:{
                                                    ready_subexpression_string_array_test();
                                                    break;
                                                }
                                                case 2:{
                                                    keyboard_string_subexpression_test_array<int>().print();
                                                    break;
                                                }
                                                case 3:{
                                                    break;
                                                }
                                                default:
                                                    cout<<"Enter a number from the list";
                                                    break;
                                            }
                                        }
                                        break;
                                    }
                                    case 2:{
                                        zero = 0;
                                        while(zero != 3){
                                            cout << endl << "Choose type of test:" << endl;
                                            cout << "1. Ready test" << endl << "2. Keyboard test" << endl << "3. back" << endl;
                                            cin >> zero;
                                            cout << "\n";
                                            switch(zero){
                                                case 1:{
                                                    ready_subexpression_int_array_test();
                                                    break;
                                                }
                                                case 2:{
                                                    keyboard_subexpression_for_sequence<int>().printforsequence();
                                                    break;
                                                }
                                                case 3:{
                                                    break;
                                                }
                                                default:{
                                                    cout<<"Enter a number from the list";
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 3:{
                                        break;
                                    }
                                    default:
                                        cout<<"Enter a number from the list";
                                        break;
                                }
                            }
                            break;
                        }
                        case 2:{
                            s = 0;
                            while(s != 3){
                                cout << endl << "Choose type of test:" << endl;
                                cout << "1. Ready test" << endl << "2. Keyboard test" << endl << "3. back" << endl;
                                cin >> s;
                                cout << "\n";
                                switch(s){
                                    case 1:{
                                        ready_subexpression_string_list_test();
                                        break;
                                    }
                                    case 2:{
                                        keyboard_string_subexpression_test_list<int>().print();
                                        break;
                                    }
                                    case 3:{
                                        break;
                                    }
                                    default:{
                                        cout<<"Enter a number from the list";
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        case 3:{
                            break;
                        }
                        default:{
                            cout<<"Enter a number from the list";
                            break;
                        }
                    }
                }
                break;
            }
            case 4:{
                break;
            }
            default:{
                cout<<"Enter a number from the list";
                break;
            }
        }
    }

}


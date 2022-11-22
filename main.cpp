#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>


//calculating euclidean distance
double euclidean_dis(vector <double> vec1, vector <double> vec2){
    double cal1, pow_res, result, cal2 = 0;
    for(int i = 0; i < vec1.size(); i++){
        cal1 = vec1[i] - vec2[i];
        pow_res = pow(cal1, 2);
        cal2 += pow_res;
    }
    result = sqrt(cal2);
    return result;
}
//calculating manhattan distance
double manhattan_des(vector <double> vec1, vector <double> vec2){
    double abs_res, result = 0;
    for(int i = 0; i < vec1.size(); i++){
        abs_res = abs(vec1[i] - vec2[i]);
        result += abs_res;
    }
    return result;
}
// calculating chebyshev distance
double chebyshev_dis(vector <double> vec1, vector <double> vec2){
    double abs_res, max_val = 0, result = 0;
    for(int i = 0; i < vec1.size(); i++){
        abs_res = abs(vec1[i] - vec2[i]);
        max_val = max(abs_res, max_val);
    }
    return max_val;
}

//this function asks from the user to input again 2 vectors if he put 2 that are not the same size
void getVectors(vector <double>* vec1, vector <double>* vec2){
    *vec1 = getvec();
    //cout << endl;
    *vec2 = getvec();
    if (vec1->size() != vec2->size()) {
        cout << "the vectors are not at the same size, please try again" << endl;
        getVectors(vec1, vec2);
    }
}

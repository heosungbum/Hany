#include "Hany.h"

#define bigger(x1, x2) x1>x2 ? x1 : x2

//------------------------double darr 1d

ncpp::doubleArr::doubleArr(){
    len=0;
}

ncpp::doubleArr::doubleArr(int leng){
    arr=(darrType)new double[leng];
    len=leng;

    int i;

    for(i=0; i<leng; i++){
        arr[i]=(double)0;
    }
}

void ncpp::doubleArr::distroy(){
    delete[] arr;
}

ncpp::doubleArr & ncpp::doubleArr::operator * (ncpp::doubleArr Iarr){
    ncpp::darr re=ncpp::darr(bigger(len, Iarr.retlen()));

    int i, j1, j2;

    for(i=0; i<(bigger(len, Iarr.retlen())); i++, j1++, j2++){
        if(j1==len)j1=0;
        if(j2==Iarr.retlen())j2=0;

        re.arr[i]=arr[j1]*Iarr.arr[j2];
    }

    return re;
}

void ncpp::doubleArr::print(){
    int i;
    cout << "[";
    for(i=0; i<len; i++){
        if(i!=0){
            cout << ", ";
        }
        cout << arr[i];
    }
    cout << "]";
}

//------------------------double darr 2d

ncpp::doubleArr2d::doubleArr2d(){
    leny=0;
}
ncpp::doubleArr2d::doubleArr2d(const int lengy, const int lengx){
    leny=lengy;
    d=new darr[leny];
    int i;

    for(i=0; i<leny; i++){
        d[i]=darr(lengx);
    }
}

void ncpp::doubleArr2d::distroy(){
    int i;

    for(i=0; i<leny; i++){
        d[i].distroy();
    }
}

ncpp::doubleArr2d & ncpp::doubleArr2d::operator * (ncpp::doubleArr2d Iarr){
    
}
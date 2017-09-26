package com.study;

import com.study.search.Search;
import com.study.sort.Sort;
import com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators;

/**
 * Created by DaiYan on 2017/3/18.
 */
public class Main {
    public static void main(String[] args){
        int[] arr={1,2,3,3,12,13,15,34};
        int[] sortedArr= Sort.sortBySelection(arr);
        Sort.sortBuble(arr);
        int index= Search.binnarySearch(arr,20);
    }



}

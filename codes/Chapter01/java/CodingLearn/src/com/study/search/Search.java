package com.study.search;

import jdk.internal.org.objectweb.asm.tree.MethodInsnNode;

/**
 * Created by DaiYan on 2017/3/18.
 */
public class Search {
    public static int binnarySearch(int[] arr,int v){
        int minIndex=0;
        int maxIndex=arr.length-1;
        while(true){
            if(minIndex>maxIndex){
                return -1;
            }
            if(arr[minIndex]==v){
                return minIndex;
            }

            if(arr[maxIndex]==v){
                return maxIndex;
            }

            int tempIndex=(minIndex+maxIndex)/2;
            if(arr[tempIndex]==v){
                return tempIndex;
            }else if(arr[tempIndex]>v){
                maxIndex=tempIndex-1;
            }else{
                minIndex=tempIndex+1;
            }
        }
    }
}

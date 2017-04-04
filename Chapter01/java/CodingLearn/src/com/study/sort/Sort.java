package com.study.sort;

/**
 * Created by DaiYan on 2017/3/18.
 */
public class Sort {

    /**
     * 选择排序，从小到大
     * 选择排序，从小到大
     * @param arr
     * @return
     */
    public static int[] sortBySelection(int[] arr){
        return null;
    }

    public static void sortBuble(int[] arr){
        if(null==arr || arr.length<=0){
            return;
        }

        for(int i=0;i<arr.length;i++){
            for(int j=1;j<arr.length-i;j++){
                if(arr[j-1]>arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }

    }
}

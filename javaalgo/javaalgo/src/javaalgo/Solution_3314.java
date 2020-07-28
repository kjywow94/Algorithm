package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Solution_3314 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		
		for(int tc = 1; tc<= t; tc++){
			StringTokenizer st = new StringTokenizer(br.readLine());
			int[] list = new int[5];
			
			for(int i =0; i< 5; i++){
				list[i] = Integer.parseInt(st.nextToken());
			}
			
			int total = 0;
			
			for(int i =0; i<5; i++){
				if(list[i] < 40){
					list[i] = 40;
				}
				total+=list[i];
			}
			
			System.out.println("#" + tc + " " + total/5);
			
			
		}
	}
}

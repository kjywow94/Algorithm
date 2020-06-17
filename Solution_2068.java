package javaalgo;

import java.util.Scanner;

public class Solution_2068 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for(int i = 1; i<= t; i++){
			int max = -987654321;
			for(int j = 0; j < 10; j++){
				int n = sc.nextInt();
				if( max < n){
					max = n;
				}
			}
			System.out.println("#"+i + " " + max);
		}
	}

}

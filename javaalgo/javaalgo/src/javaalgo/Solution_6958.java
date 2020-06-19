package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Solution_6958 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc = new Scanner(System.in);

		int T = sc.nextInt();

		for (int tc = 1; tc <= T; tc++) {
			int n = sc.nextInt();
			int m = sc.nextInt();

			int[][] arr = new int[n][m];

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					arr[i][j] = sc.nextInt();
				}
			}

			int fp = 0;
			int ft = -987654321;
			for (int i = 0; i < n; i++) {
				int cnt = 0;
				for (int j = 0; j < m; j++) {
					if(arr[i][j] == 1){
						cnt++;
					}
				}
				System.out.println("ft : " + ft);
				System.out.println("cnt : " + cnt);
				if(ft < cnt){
					ft = Math.max(ft, cnt);
					fp = i;
				}
				else if(ft == cnt){
					fp = i;
				}
			}
			
			System.out.println((fp+1)+ " " + ft);
			
		}
	}

}

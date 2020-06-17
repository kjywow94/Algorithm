package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Solution_1289 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= T; tc++) {
			String s = br.readLine();
			char point = '0';
			int cnt = 0;
			for (int i = 0; i < s.length(); i++) {
				if(point != s.charAt(i)){
					cnt++;
					point = s.charAt(i);
				}
			}
			System.out.println("#"+tc+" " + cnt);
		}
	}

}

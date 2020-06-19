package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;

public class Solution_7728 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int T = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= T; tc++) {

			String s = br.readLine();
			int len = s.length();
			boolean[] boo = new boolean[10];
			int cnt = 0;
			for (int i = 0; i < len; i++) {
				boo[Integer.parseInt(s.substring(i, i + 1))] = true;
			}

			for (int i = 0; i < boo.length; i++) {
				if (boo[i] == true) {
					cnt++;
				}
			}
			System.out.println("#" + tc + " " + cnt);

		}
	}

}

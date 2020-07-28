package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution_9317 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= t; tc++) {
			int n = Integer.parseInt(br.readLine());

			String str = br.readLine();
			String strr = br.readLine();
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (str.charAt(i) == strr.charAt(i)) {
					cnt++;
				}
			}

			System.out.println("#" + tc + " " + cnt);

		}
	}
}

package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution_4406 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= t; tc++) {
			String s = br.readLine();

			StringBuilder sb = new StringBuilder();

			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) == 'a') {
					continue;
				} else if (s.charAt(i) == 'e') {
					continue;
				} else if (s.charAt(i) == 'i') {
					continue;
				} else if (s.charAt(i) == 'o') {
					continue;
				} else if (s.charAt(i) == 'u') {
					continue;
				} else {
					sb.append(s.charAt(i));
				}
			}

			System.out.println("#" + tc + " " + sb);

		}
	}
}

package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution_1213 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		for (int tc = 1; tc <= 10; tc++) {
			int n = Integer.parseInt(br.readLine());
			String text = br.readLine();
			String str = br.readLine();
			int cnt = 0;
			int len = text.length() - 1;

			for (int i = 0; i < str.length() - len; i++) {
				int ccnt = 0;
				for (int j = 0; j < text.length(); j++) {
					if (text.charAt(j) == str.charAt(i + j)) {
						ccnt++;
					}
					if (ccnt == text.length()) {
						cnt++;
					}
				}
			}

			System.out.println("#" + tc + " " + cnt);
		}
	}
}

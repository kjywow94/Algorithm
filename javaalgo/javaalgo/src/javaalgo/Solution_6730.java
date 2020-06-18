package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution_6730 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= t; tc++) {
			int N = Integer.parseInt(br.readLine());
			int max = 0;
			int min = 0;
			int[] num = new int[103]; // ÃÊ±âÈ­
			StringTokenizer st = new StringTokenizer(br.readLine());
			for (int i = 0; i < N; i++) {
				num[i] = Integer.parseInt(st.nextToken());
			}

			for (int j = 0; j < N - 1; j++) {
				if (num[j] < num[j + 1]) {
						max = Math.max(max, num[j + 1] - num[j]);		

					
				} else if (num[j] > num[j + 1]) {
						min = Math.max(min, num[j] - num[j + 1]);					
					
				}
			}

			System.out.println("#" + tc + " " + max + " " + min);
		}
	}

}

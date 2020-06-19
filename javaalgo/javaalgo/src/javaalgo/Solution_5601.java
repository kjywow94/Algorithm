package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution_5601 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= t; tc++) {
			int N = Integer.parseInt(br.readLine());

			System.out.print("#" + tc + " ");

			for (int i = 0; i < N; i++) {
				System.out.print("1/" + N + " ");
			}
			System.out.println();
		}
	}
}

package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Soulution_8500 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int T = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= T; tc++) {
			int N = Integer.parseInt(br.readLine());

			StringTokenizer st = new StringTokenizer(br.readLine());
			int sum = 0;
			int max = -987654321;
			for (int i = 0; i < N; i++) {
				int num = Integer.parseInt(st.nextToken());
				
				sum += num;
				if(max < num)
					max = num;
			}
			
			System.out.println("#"+ tc+ " " + (sum + max + N));
		}
	}
}

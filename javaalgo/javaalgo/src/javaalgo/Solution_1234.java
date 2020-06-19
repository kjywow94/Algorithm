package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Solution_1234 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		for (int tc = 1; tc <= 10; tc++) {
			ArrayList<String> list = new ArrayList<>();
			StringTokenizer st = new StringTokenizer(br.readLine());

			int T = Integer.parseInt(st.nextToken());

			String s = st.nextToken();
			StringBuilder sb = new StringBuilder();
			
			int len = s.length();

			for (int i = 0; i < len; i++) {
				list.add(s.substring(i, i + 1));
			}

			for (int i = 1; i < len; i++) {
				if (list.get(i - 1).equals(list.get(i))) {
					list.remove(i);
					list.remove(i - 1);
					i -= 2;
					len -= 2;
				}
				if (i < 0) {
					i = 0;
				}
			}
			
			sb.append("#"+tc+" ");
			for(int i = 0; i < list.size(); i++){
				sb.append(list.get(i));
			}
			
			System.out.println(sb.toString());
		}

	}

}

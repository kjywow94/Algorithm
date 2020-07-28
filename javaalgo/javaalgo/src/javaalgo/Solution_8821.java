package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution_8821 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int T = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= T; tc++) {
			String str = br.readLine();
			
			boolean[] chk = new boolean[10];
			
			for(int i = 0; i< str.length(); i++){
				int num = Integer.parseInt(str.substring(i, i+1));
				if(!chk[num]){
					chk[num] = true;					
				}
				else
				{
					chk[num] = false;
				}
				
			}
			
			int cnt = 0;
			
			for(int i = 0; i< 10; i++){
				if(chk[i]){
					cnt++;
				}
			}
			System.out.println("#"+tc+" " + cnt);
			
		}
	}
}

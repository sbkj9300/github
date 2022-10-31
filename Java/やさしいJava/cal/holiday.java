import java.util.Calendar;

public class holiday{
	public boolean jadgment(int date){
		int year = date/1000;
		int month = (date%10000)/100;
		int day = date%100;
		//dayofweek 曜日　dayofweekinmonth 何回目の曜日
		Calendar cal = Calendar.getInstance();
		cal.set(year,month,day);
		int dow = cal.get(Calendar.DAY_OF_WEEK);
		int dowim = cal.get(Calendar.DAY_OF_WEEK_IN_MONTH);
		boolean ans = false;
		
			if(month ==1){ 	
				if(day == 1){
					ans = true;
				}
				else if((dow == 2) && (dowim == 2)){
					ans = true;
				}
				else{
					ans = false;	
				}
			}			
			if(month ==2){
				if(day == 11){
					ans = true;		
				}
				else{
					ans = false;
				}
			}
		if(month ==3){ 
			int d = year%4;
			if(((d==0) || (d==1)) && (day == 20)){
				ans = true;
			}
			else if(((d == 2) || (d==4)) && (day ==21)){
				ans = true;
			}
			else{
				ans = false;
			}
		}
		if(month ==4){ 
			if(day == 29){
				ans = true;
			}
			else{
				ans = false;
			}
		}
		if(month ==5){ 
			if((day==3) || (day==4) || (day==5)){
				ans = true;
			}
			else{
				ans = false;
			}
		}
		if(month ==6){ 
			ans = false;
			}
		if(month ==7){
			if((dow == 2) && (dowim == 3)){
				ans = true;
			}
			else{
				ans = false;	
			}
		}
		if(month ==8){ 
			ans = false;
			}
		if(month ==9){ 
			int dd = year%4;
			if((dow == 2) && (dowim == 3)){
				ans = true;
			}
			else if((dd==0) && (day ==22)){
				ans = true;
			}
			else if ((!(dd==0)) && (day==23)){
				ans = true;
			}
			else{
				ans = false;
			}
		}
		if(month ==10){ 
			if((dow == 2) && (dowim == 2)){
					ans = true;
				}
			else{
				ans = false;
				}
			}
			if(month ==11){ 
				if ((day ==3) || (day ==23)){
					ans = true;
				}
				else{
					ans = false;		
				}
			}
			if(month ==12){
				if(day == 23){
					ans = true;
				}
				else{
					ans = false;
				}
			}
			return ans;
		}
	}


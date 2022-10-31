import java.util.Calendar;

public class cal {
    public static void main(String args[]) {

        //Calendarを生成
        Calendar cal = Calendar.getInstance();
        //cal.set(2021,5,18);

        //画面出力
        System.out.println("YEAR: " + cal.get(Calendar.YEAR));
        System.out.println("MONTH: " + cal.get(Calendar.MONTH));
        System.out.println("DATE: " + cal.get(Calendar.DATE));
        System.out.println("HOUR: " + cal.get(Calendar.HOUR));
        System.out.println("MINUTE: " + cal.get(Calendar.MINUTE));
        System.out.println("SECOND: " + cal.get(Calendar.SECOND));
        System.out.println("MILLISECOND: " + cal.get(Calendar.MILLISECOND));
        System.out.println("DAY_OF_YEAR: " + cal.get(Calendar.DAY_OF_YEAR));
        System.out.println("DAY_OF_MONTH: " + cal.get(Calendar.DAY_OF_MONTH));
        System.out.println("DAY_OF_WEEK: " + cal.get(Calendar.DAY_OF_WEEK));
        System.out.println("DAY_OF_WEEK_IN_MONTH: " +
                                  cal.get(Calendar.DAY_OF_WEEK_IN_MONTH));
        System.out.println("WEEK_OF_YEAR: " + cal.get(Calendar.WEEK_OF_YEAR));
        System.out.println("WEEK_OF_MONTH: " + cal.get(Calendar.WEEK_OF_MONTH));
        System.out.println("AM_PM: " + cal.get(Calendar.AM_PM));
        System.out.println("HOUR_OF_DAY: " + cal.get(Calendar.HOUR_OF_DAY));
        System.out.println("ERA: " + cal.get(Calendar.ERA));
        holiday hol = new holiday();
        System.out.println(hol.jadgment(20210101));
        System.out.println(cal.getTime().toString());
        //System.out.println(cal.toString());

        

    }
}
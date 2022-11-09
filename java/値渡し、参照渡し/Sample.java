

public class Sample {
    int x;
    public static void main(String[] args) {
        int a = 1;
        add(a);
        System.out.println("メインクラス内" + a);

        IntTest intTest = new IntTest();

        intTest.a = 3;
        add(intTest.a);
        System.out.println("メインクラスIntTest内" + intTest.a);

        addIntTest(intTest);
        System.out.println("メインクラスaddIntTest" + intTest.a);

    }

    static void add(int a) {
        a = a + 1;
        System.out.println("メソッド内" + a);
    }

    static void addIntTest(IntTest intTest) {
        intTest.a = intTest.a + 1;
        System.out.println("addIntTest:" + intTest.a);
    }
}
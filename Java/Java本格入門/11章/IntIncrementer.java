public class IntIncrementer implements Runnable {
    private String name;
    private IntHolder holder;

    public IntIncrementer(String argName, IntHolder argHolder) {
        name = argName;
        holder = argHolder;
    }

    @Override
    public void run() {
        System.out.println("[" + name + "] started.");
        for(int counter = 0; counter < 1000000; counter++) {
            holder.increment();
        }
        System.out.println("[" + name + "] finished.");
    }
}

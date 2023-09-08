import org.deeplearning4j.api.storage.StatsStorage;
import org.deeplearning4j.ui.api.UIServer;
import org.deeplearning4j.ui.storage.FileStatsStorage;

public class DL4JTest {
    public static void main(String[] args) {
        // Initialize DL4J UI server (optional)
        UIServer uiServer = UIServer.getInstance();
        StatsStorage statsStorage = new FileStatsStorage.Builder().build();
        uiServer.attach(statsStorage);

        System.out.println("DL4J is working!");
    }
}
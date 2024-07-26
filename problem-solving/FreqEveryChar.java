import java.util.HashMap;

public class FreqEveryChar {
  public static void main(String[] args) {
    String str = "good";
    HashMap<Character, Integer> myMap = new HashMap<>();

    for (Character ch : str.toCharArray()) {
      if (myMap.containsKey(ch)) {
        myMap.replace(ch, myMap.get(ch) + 1);
      } else {
        myMap.put(ch, 1);
      }
    }

    System.out.println(myMap);
  }
}
import java.applet.Applet;
import java.awt.*;

public class  APP extends Applet {
    public void paint(Graphics g) {
          // Draw the face (yellow circle)
          g.setColor(Color.yellow);
          g.fillOval(25, 25, 250, 250); // Increased size of the face
  
          // Draw the eyes (black circles)
          g.setColor(Color.black);
          g.fillOval(75, 90, 50, 50); // Adjusted position of left eye
          g.fillOval(175, 90, 50, 50); // Adjusted position of right eye
  
          // Draw the mouth (smiling arc)
          Graphics2D g2d = (Graphics2D) g;
          g2d.setStroke(new BasicStroke(5));
          g2d.drawArc(75, 130, 150, 100, 0, -180); // Adjusted position and size of the smile
    }
}

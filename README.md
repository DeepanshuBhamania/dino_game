**Hardware Setup:**
We positioned Light Dependent Resistors (LDRs) strategically to sense obstacles on the screen. Each obstacle lane required an LDR, leading to the installation of two LDRs for the two obstacle lanes and one for background detection, totaling three LDRs. These LDRs were connected to analog input pins on a microcontroller (like Arduino), which processed the incoming sensor data.

**Calibration:**
The LDRs were calibrated to establish threshold values for obstacle detection. This calibration necessitated experimentation to ascertain the LDR values corresponding to the presence of obstacles in each lane.

**Microcontroller Programming:**
Analog values from the LDRs were read using the microcontroller. These values were then compared to the calibrated thresholds to determine the presence of obstacles in each lane.

**Control Algorithm:**
We implemented a decision-making algorithm to trigger the dinosaur's jump based on LDR readings. The algorithm governed when the jump action occurred.

**Communication with the Game:**
Given that the Dino Game operates as a web application, simulating keyboard input was essential to prompt the dinosaur's jump. This was achieved using a servo motor to mechanically press the spacebar key on the keyboard, executed when the control algorithm signaled a jump.

**Testing and Refinement:**
Extensive testing was conducted with the Dino Game to evaluate system performance. Parameters such as threshold values and the control algorithm were adjusted to ensure precise obstacle detection and dependable jumping.

**Fine-Tuning:**
This phase encompassed iterative enhancement of calibration and algorithms to enhance the accuracy and responsiveness of automated jumping.

**Technology Utilized:**
The core technology employed for this project was Arduino, forming the backbone of the hardware and control system that facilitated the interaction between the game and the LDR-based obstacle detection mechanism.

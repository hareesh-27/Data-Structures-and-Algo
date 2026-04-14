## CAN - Controller Area Network

Can was initialyy developed by bosch mainly for automotive applications to address the issue of complex wiring. But later is used in wide reas.
-------------------------------------------------------------------------------------------------------------------------------------------------

CAN is a 2 wire protocol.
 - It has 2 buses : CANH and CANL
 - It is an asynchronous protocol
 - Each device on the CAN bus is called as node. The dev which sends data TX, receive RX.
 - CAN is a **multimaster** and **multicast** protocol
       - **multimaster** : Any node can behave/work as a master
       - **multicast :**  If TX sends data, at a time all other nodes receives data. The node which doesnt want the data filters it.
 - It is a messaged based protocol. Each message has an priority num (identifier)
 - There are 2 types of CAN - Stanndard and extended. 11 bit and 29 bit identifier respecfively
 - Each message is in the form of frames.
      - Data frame
      - Error frame
      - Remote frame
      - Overload frame


  <img width="1196" height="293" alt="image" src="https://github.com/user-attachments/assets/c7cc3273-ce06-4094-8940-ea2f72b45ee0" />


  <img width="1365" height="230" alt="image" src="https://github.com/user-attachments/assets/7341e378-d2be-4f31-bbd0-b40bc7e33b4e" />

  **Expl:**
   - 


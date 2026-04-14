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

   <img width="2025" height="1239" alt="image" src="https://github.com/user-attachments/assets/24d112d0-b604-41c6-b449-f650d760ebf6" />


   - In CAN frame there are multiple fields
      - SOF :Start of frame
      - Arbiteration field: 11 bit identifier and RTR (Remote transmission request)
      - Control field: IDE, r0, DLC (Data Length Code)
      - Data
      - CRC
      - ACK
      - EOF
    
   ## SOF 
   Start of frame
    - This is always 0. 0 is the dominant bit in CAN
   
   ## Arbiteration field
   It contains 11 bit identifier and RTR
    - **Identifier** - tells us the priority of  the message. If the message is top priority, all 11 bits are set to 0.
    - **RTR** - indicates whether the frame is remote frame or not. 1 for remote frame, 0 for others.
   
   ## Control field
   It contains IDE, r0 and DLC
    - IDE - Identifier extension bit. Tells us whether the identifier is 11/29 bit. Dominant for 11 bit.
    - r0  - reserved for future purpose. It is kept for future use so that new features can be added without modifying the existing protocol.
    - DLC - Data length code. Indicates the length of actual data.

   ## Data
   If data length is 2 bytes, we set DLC to 2 ie:0010.

   ## CRC
   Cyclic redundany check
    - Algorithm for checking errors on the data received in RX
    
   ## ACK
   Acknowledgement bit
    - After receiving data, the RX makes this bit dominant ensuirng data is received correctly

   ## EOF
   7 continuous recessive bits indicate end of frame


# INTERNET

<br/>

> How did it work? I will use a story to explain it!

<br/>

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/1.internet.png)
 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/2.internet.png)
  - [👉跳到說明(Description)](#Description)

# FIRST OF ALL

 > http protocol: Application 應用層 HTTP protocol is based on TCP.     //  應用層面，主要解決如何封裝資料。

 > TCP protocol: Transport 傳輸層.                                      // 顧名思義，解決如何在網路中傳輸的問題。

 > ip protocol: Internet 網路層.                                        // 網路層面，功能同上。

 > TCP/IP 稱為網際網路協議套組，這兩大家族組成網路基礎架構。

<br/>

 ### TCP/IP  

   TCP/IP Protocol Suite: <br/>

 > 當多個協定同時工作時，類似計算機的堆棧，所以又稱(TCP/IP Protocol Stack)。 <br/>

 > 將資料應該如何封裝、定址、傳輸、路由以及在目的地如何接收，都加以標準化。<br/>

 #### OSI (Open System Interconnection Model)

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi.png)

<br/>

 通常人們認為OSI模型的最上面三層（應用層、表示層和會話層）在TCP/IP組中是一個應用層。
 > ip is also based on the network layer as a black box design.
 > So it is also reasonable as a layer.

 ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi2.png)

 <br>


 ## TCP (Transmission Control Protocol)

 1. 面向連接: <br/>

    面向連接代表雙方在交換數據時必須先建立連結。
    > 舉例:<br/>A撥打電話給B，A要等B聽到後接起，確認是A後才能溝通。
    > Example:<br/> A Dialing the phone to B, B should wait for B to hear, confirm that it is A to communicate.

 2. 基於字節流: <br/>

    TCP交換數據格式是字節(byte)組成的有序字節流。<br/><br/>

    <p id = Description>用上面的故事做比喻:<br/></p>

    ### 📖 故事說明(Description)


     賣家買家互相通電 &nbsp; => TCP/IP &ensp; 三次握手，建立連接(connection establishment)。<br/>

     賣家打包 &nbsp; &ensp; &ensp; &ensp; &ensp; &nbsp; => 內核按照TCP protocol &ensp; 將無特殊格式的數據打包成 __報文段(segment)__ ，<br/>

     賣家寄出 &nbsp; &ensp; &ensp; &ensp; &ensp; &nbsp; => 內核按照 &ensp; IP protocol &ensp; 將數據報文封包成 __數據報(IP Datagram)__ 。 <br/>

     物流中心 &nbsp; &ensp; &ensp; &ensp; &ensp; &nbsp; => __數據報(IP Datagram)__ &ensp; 經過路由器網路傳輸到伺服器。  <br/>

     買家收到 &nbsp; &ensp; &ensp; &ensp; &ensp; &nbsp; => 內核從 __數據報(IP Datagram)__ ，拆分出TCP的 __報文段(segment)__ 。 <br/> 

     買家拆包 &nbsp; &ensp; &ensp; &ensp; &ensp; &nbsp; => 內核從 __報文段(segment)__ 還原成字節流(byte stream) ，再把數據(Data)給到應用層。 <br/>

    > __數據報(IP Datagram)__: &ensp; 為封包網絡中最小的單位。     

    ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/osi3.png)

    __報文段(segment)__ 的結構: 

    ![image](https://github.com/uwxuan/rookie-project/blob/main/internet/tcp-construct.png)
     <br/>

    TCP首部結構:

      - 端口號(Source Port and Destination Port): &ensp; 每個TCP報文段都有端口號，用於找發送端和接收端應用端進程。<br/>

      - 序號(Sequence Number): &ensp; 將失序的數據從新排列，它位於TCP設置為數據部份的第一個字節的編號。<br/>

      - 確認序號(Acknowledgment Number): &ensp; 接收方確認收到後所回覆的，用於核對接收的數據，下一次數據從那開始發。&ensp;if &ensp; (ACK &ensp; = &ensp; 1)&ensp; return &ensp; ACK+1;
     
      - 控制位(Control Bits): 

         - URG (Urgent Bit): &ensp; 值為1時，緊急指針生效。

         - ACK (Acknowledrment Bit): &ensp; 值為1時，確認序號生效。

         - PSH (Push Bit): &ensp; 接收方盡快把報文段交給應用層。

         - RST (Reset Bit): &ensp; 發送端遇到問題，想要重建連接

         - SYN (SynchronizerBit): &ensp; 同步序號，用于發起一个連接。

         - FIN (Finish Bit): &ensp; 發送端請求斷開連接。



 3. 可靠性:<br/>

 ## HTTP

 ## SOCKET
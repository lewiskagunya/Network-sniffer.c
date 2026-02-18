
Project: Network Layer Protocol Analysis
📌 Overview

This project is a functional network sniffer developed in C to capture and decode Ethernet frames and IP packets. Unlike high-level tools, this sniffer interacts directly with the network interface using Raw Sockets, providing a transparent view of data encapsulation.
🛠️ Technical Implementation

    Socket Programming: Utilized AF_PACKET and SOCK_RAW to capture traffic at the Data Link layer.

    Header Parsing: Manually decoded hexadecimal data into readable structures:

        Ethernet Header: MAC Addresses and EtherType.

        IP Header: Source/Destination IPs, TTL, and Protocol type (TCP/UDP/ICMP).

    Memory Management: Used pointers to navigate through packet buffers to extract nested headers.

🔍 Key Skills Demonstrated

    Packet Analysis: Deep understanding of how data is "wrapped" as it moves down the OSI stack.

    Protocol Investigation: Ability to identify unauthorized protocols or suspicious traffic patterns.

    Low-Level C: Efficient memory handling and bitwise operations to read flags within packet headers.

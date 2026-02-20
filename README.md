Project Overview

Inspired by the methodologies in “Hacking: The Art of Exploitation” by Jon Erickson, this project is a low-level network discovery tool written in C. Unlike high-level scripts, this sniffer interacts directly with raw sockets to capture and dissect Ethernet frames, IP headers, and TCP/UDP segments at the byte level.
Core Functionalities

    Raw Socket Integration: Bypasses standard transport layer protocols to capture raw traffic directly from the network interface.

    Header Dissection: Manually parses binary data into C structures for:

        Ethernet Frames (MAC Addresses, EtherType)

        IPv4 Headers (Source/Destination IPs, Protocol IDs, TTL)

        TCP/UDP Segments (Port mapping and flag analysis)

    Hex Dump Output: Includes a custom dump() function to display packet contents in both Hexadecimal and ASCII, essential for deep packet inspection (DPI).

    Memory Efficient: Uses pointer arithmetic and struct casting for zero-copy data processing.

Technical Stack

    Language: C (Standard C99)

    Headers Used: <sys/socket.h>, <netinet/in.h>, <arpa/inet.h>

    Environment: Linux (Raw socket support)

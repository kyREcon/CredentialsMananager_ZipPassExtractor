# CredentialsMananager_ZipPassExtractor

WTF?!?
------
Retrieves zip passwords that have been cached in the Credentials Manager.

From Windows 8.1 onwards (not tested in Windows 8), including Windows 10, if the user opens
a password protected zip file with Windows Explorer, then the password is automatically
cached in the Credentials Manager for the duration of the current logon session.

This program will search for such credentials and will display them to the user.

If any of those passwords has been re-used for other purposes as well, an attacked could
take advantage of this to compromise further that host and/or other hosts in the network.

Some more information, and a more simplified version of this can be found here:
http://www.anti-reversing.com/credentials-manager-zip-passwords-caching-win8-x10/


Disclaimer
----------
I wrote this for fun to use in other private projects. Use at your own risk.


Author
------
Author: Kyriakos Economou (@kyREcon) / www.anti-reversing.com


MIT License
-----------

Copyright (c) [2016] [Kyriakos Economou]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

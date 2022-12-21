#!/usr/bin/env python
#!/bin/bash
import os
i = 1
while i < 10000 :
	print ('\npage num ' + str(i))
	val = os.system('./tlb ' + str(i) + ' ' + str(10000))
	i = i * 2

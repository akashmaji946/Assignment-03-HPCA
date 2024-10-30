
libwork.so:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <_Z17ZEFFG330202_5kk2Lim>:
       0:	f3 0f 1e fa          	endbr64
       4:	41 54                	push   r12
       6:	41 89 f8             	mov    r8d,edi
       9:	b9 10 00 00 00       	mov    ecx,0x10
       e:	49 89 f1             	mov    r9,rsi
      11:	55                   	push   rbp
      12:	48 81 ec 98 00 00 00 	sub    rsp,0x98
      19:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
      20:	00 00 
      22:	48 89 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rax
      29:	00 
      2a:	31 c0                	xor    eax,eax
      2c:	48 89 e2             	mov    rdx,rsp
      2f:	48 89 d7             	mov    rdi,rdx
      32:	f3 48 ab             	rep stos QWORD PTR es:[rdi],rax
      35:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 3c <_Z17ZEFFG330202_5kk2Lim+0x3c>
      3c:	41 83 f8 02          	cmp    r8d,0x2
      40:	0f 84 9a 01 00 00    	je     1e0 <_Z17ZEFFG330202_5kk2Lim+0x1e0>
      46:	7f 60                	jg     a8 <_Z17ZEFFG330202_5kk2Lim+0xa8>
      48:	45 85 c0             	test   r8d,r8d
      4b:	0f 84 5f 01 00 00    	je     1b0 <_Z17ZEFFG330202_5kk2Lim+0x1b0>
      51:	41 83 f8 01          	cmp    r8d,0x1
      55:	0f 85 e5 00 00 00    	jne    140 <_Z17ZEFFG330202_5kk2Lim+0x140>
      5b:	48 63 40 04          	movsxd rax,DWORD PTR [rax+0x4]
      5f:	48 89 c1             	mov    rcx,rax
      62:	48 3d ff 03 00 00    	cmp    rax,0x3ff
      68:	76 57                	jbe    c1 <_Z17ZEFFG330202_5kk2Lim+0xc1>
      6a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
      70:	be 80 00 00 00       	mov    esi,0x80
      75:	4c 89 cf             	mov    rdi,r9
      78:	e8 00 00 00 00       	call   7d <_Z17ZEFFG330202_5kk2Lim+0x7d>
      7d:	89 c5                	mov    ebp,eax
      7f:	85 c0                	test   eax,eax
      81:	75 55                	jne    d8 <_Z17ZEFFG330202_5kk2Lim+0xd8>
      83:	48 8b 84 24 88 00 00 	mov    rax,QWORD PTR [rsp+0x88]
      8a:	00 
      8b:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
      92:	00 00 
      94:	0f 85 a8 01 00 00    	jne    242 <_Z17ZEFFG330202_5kk2Lim+0x242>
      9a:	48 81 c4 98 00 00 00 	add    rsp,0x98
      a1:	5d                   	pop    rbp
      a2:	41 5c                	pop    r12
      a4:	c3                   	ret
      a5:	0f 1f 00             	nop    DWORD PTR [rax]
      a8:	41 83 f8 03          	cmp    r8d,0x3
      ac:	0f 85 8e 00 00 00    	jne    140 <_Z17ZEFFG330202_5kk2Lim+0x140>
      b2:	48 63 40 0c          	movsxd rax,DWORD PTR [rax+0xc]
      b6:	48 89 c1             	mov    rcx,rax
      b9:	48 3d ff 03 00 00    	cmp    rax,0x3ff
      bf:	77 af                	ja     70 <_Z17ZEFFG330202_5kk2Lim+0x70>
      c1:	48 c1 e8 06          	shr    rax,0x6
      c5:	be 01 00 00 00       	mov    esi,0x1
      ca:	48 d3 e6             	shl    rsi,cl
      cd:	48 09 34 c2          	or     QWORD PTR [rdx+rax*8],rsi
      d1:	eb 9d                	jmp    70 <_Z17ZEFFG330202_5kk2Lim+0x70>
      d3:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
      d8:	ba 26 00 00 00       	mov    edx,0x26
      dd:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # e4 <_Z17ZEFFG330202_5kk2Lim+0xe4>
      e4:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # eb <_Z17ZEFFG330202_5kk2Lim+0xeb>
      eb:	e8 00 00 00 00       	call   f0 <_Z17ZEFFG330202_5kk2Lim+0xf0>
      f0:	89 ee                	mov    esi,ebp
      f2:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # f9 <_Z17ZEFFG330202_5kk2Lim+0xf9>
      f9:	e8 00 00 00 00       	call   fe <_Z17ZEFFG330202_5kk2Lim+0xfe>
      fe:	48 89 c5             	mov    rbp,rax
     101:	48 8b 00             	mov    rax,QWORD PTR [rax]
     104:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     108:	4c 8b a4 05 f0 00 00 	mov    r12,QWORD PTR [rbp+rax*1+0xf0]
     10f:	00 
     110:	4d 85 e4             	test   r12,r12
     113:	0f 84 2e 01 00 00    	je     247 <_Z17ZEFFG330202_5kk2Lim+0x247>
     119:	41 80 7c 24 38 00    	cmp    BYTE PTR [r12+0x38],0x0
     11f:	0f 84 eb 00 00 00    	je     210 <_Z17ZEFFG330202_5kk2Lim+0x210>
     125:	41 0f be 74 24 43    	movsx  esi,BYTE PTR [r12+0x43]
     12b:	48 89 ef             	mov    rdi,rbp
     12e:	e8 00 00 00 00       	call   133 <_Z17ZEFFG330202_5kk2Lim+0x133>
     133:	48 89 c7             	mov    rdi,rax
     136:	e8 00 00 00 00       	call   13b <_Z17ZEFFG330202_5kk2Lim+0x13b>
     13b:	e9 43 ff ff ff       	jmp    83 <_Z17ZEFFG330202_5kk2Lim+0x83>
     140:	48 63 30             	movsxd rsi,DWORD PTR [rax]
     143:	48 89 f1             	mov    rcx,rsi
     146:	48 81 fe ff 03 00 00 	cmp    rsi,0x3ff
     14d:	77 10                	ja     15f <_Z17ZEFFG330202_5kk2Lim+0x15f>
     14f:	48 c1 ee 06          	shr    rsi,0x6
     153:	bf 01 00 00 00       	mov    edi,0x1
     158:	48 d3 e7             	shl    rdi,cl
     15b:	48 09 3c f2          	or     QWORD PTR [rdx+rsi*8],rdi
     15f:	48 63 70 04          	movsxd rsi,DWORD PTR [rax+0x4]
     163:	48 89 f1             	mov    rcx,rsi
     166:	48 81 fe ff 03 00 00 	cmp    rsi,0x3ff
     16d:	77 10                	ja     17f <_Z17ZEFFG330202_5kk2Lim+0x17f>
     16f:	48 c1 ee 06          	shr    rsi,0x6
     173:	bf 01 00 00 00       	mov    edi,0x1
     178:	48 d3 e7             	shl    rdi,cl
     17b:	48 09 3c f2          	or     QWORD PTR [rdx+rsi*8],rdi
     17f:	48 63 70 08          	movsxd rsi,DWORD PTR [rax+0x8]
     183:	48 89 f1             	mov    rcx,rsi
     186:	48 81 fe ff 03 00 00 	cmp    rsi,0x3ff
     18d:	0f 87 1f ff ff ff    	ja     b2 <_Z17ZEFFG330202_5kk2Lim+0xb2>
     193:	48 c1 ee 06          	shr    rsi,0x6
     197:	bf 01 00 00 00       	mov    edi,0x1
     19c:	48 d3 e7             	shl    rdi,cl
     19f:	48 09 3c f2          	or     QWORD PTR [rdx+rsi*8],rdi
     1a3:	e9 0a ff ff ff       	jmp    b2 <_Z17ZEFFG330202_5kk2Lim+0xb2>
     1a8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
     1af:	00 
     1b0:	48 63 00             	movsxd rax,DWORD PTR [rax]
     1b3:	48 89 c1             	mov    rcx,rax
     1b6:	48 3d ff 03 00 00    	cmp    rax,0x3ff
     1bc:	0f 87 ae fe ff ff    	ja     70 <_Z17ZEFFG330202_5kk2Lim+0x70>
     1c2:	48 c1 e8 06          	shr    rax,0x6
     1c6:	be 01 00 00 00       	mov    esi,0x1
     1cb:	48 d3 e6             	shl    rsi,cl
     1ce:	48 09 34 c2          	or     QWORD PTR [rdx+rax*8],rsi
     1d2:	e9 99 fe ff ff       	jmp    70 <_Z17ZEFFG330202_5kk2Lim+0x70>
     1d7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
     1de:	00 00 
     1e0:	48 63 40 08          	movsxd rax,DWORD PTR [rax+0x8]
     1e4:	48 89 c1             	mov    rcx,rax
     1e7:	48 3d ff 03 00 00    	cmp    rax,0x3ff
     1ed:	0f 87 7d fe ff ff    	ja     70 <_Z17ZEFFG330202_5kk2Lim+0x70>
     1f3:	48 c1 e8 06          	shr    rax,0x6
     1f7:	be 01 00 00 00       	mov    esi,0x1
     1fc:	48 d3 e6             	shl    rsi,cl
     1ff:	48 09 34 c2          	or     QWORD PTR [rdx+rax*8],rsi
     203:	e9 68 fe ff ff       	jmp    70 <_Z17ZEFFG330202_5kk2Lim+0x70>
     208:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
     20f:	00 
     210:	4c 89 e7             	mov    rdi,r12
     213:	e8 00 00 00 00       	call   218 <_Z17ZEFFG330202_5kk2Lim+0x218>
     218:	49 8b 04 24          	mov    rax,QWORD PTR [r12]
     21c:	be 0a 00 00 00       	mov    esi,0xa
     221:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 228 <_Z17ZEFFG330202_5kk2Lim+0x228>
     228:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
     22c:	48 39 d0             	cmp    rax,rdx
     22f:	0f 84 f6 fe ff ff    	je     12b <_Z17ZEFFG330202_5kk2Lim+0x12b>
     235:	4c 89 e7             	mov    rdi,r12
     238:	ff d0                	call   rax
     23a:	0f be f0             	movsx  esi,al
     23d:	e9 e9 fe ff ff       	jmp    12b <_Z17ZEFFG330202_5kk2Lim+0x12b>
     242:	e8 00 00 00 00       	call   247 <_Z17ZEFFG330202_5kk2Lim+0x247>
     247:	e8 00 00 00 00       	call   24c <_Z17ZEFFG330202_5kk2Lim+0x24c>
     24c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000000250 <_Z12FTHFg463_7lpiPhb>:
     250:	f3 0f 1e fa          	endbr64
     254:	41 55                	push   r13
     256:	41 54                	push   r12
     258:	41 89 fc             	mov    r12d,edi
     25b:	55                   	push   rbp
     25c:	89 d5                	mov    ebp,edx
     25e:	53                   	push   rbx
     25f:	48 89 f3             	mov    rbx,rsi
     262:	48 83 ec 38          	sub    rsp,0x38
     266:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
     26d:	00 00 
     26f:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
     274:	31 c0                	xor    eax,eax
     276:	e8 00 00 00 00       	call   27b <_Z12FTHFg463_7lpiPhb+0x2b>
     27b:	49 89 c5             	mov    r13,rax
     27e:	40 84 ed             	test   bpl,bpl
     281:	0f 84 28 01 00 00    	je     3af <_Z12FTHFg463_7lpiPhb+0x15f>
     287:	48 89 c6             	mov    rsi,rax
     28a:	bf ff ff ff ff       	mov    edi,0xffffffff
     28f:	e8 00 00 00 00       	call   294 <_Z12FTHFg463_7lpiPhb+0x44>
     294:	bf ba 00 00 00       	mov    edi,0xba
     299:	31 c0                	xor    eax,eax
     29b:	e8 00 00 00 00       	call   2a0 <_Z12FTHFg463_7lpiPhb+0x50>
     2a0:	4c 89 ea             	mov    rdx,r13
     2a3:	44 89 e7             	mov    edi,r12d
     2a6:	48 89 c6             	mov    rsi,rax
     2a9:	e8 00 00 00 00       	call   2ae <_Z12FTHFg463_7lpiPhb+0x5e>
     2ae:	48 89 e6             	mov    rsi,rsp
     2b1:	31 ff                	xor    edi,edi
     2b3:	e8 00 00 00 00       	call   2b8 <_Z12FTHFg463_7lpiPhb+0x68>
     2b8:	f2 0f 10 0d 00 00 00 	movsd  xmm1,QWORD PTR [rip+0x0]        # 2c0 <_Z12FTHFg463_7lpiPhb+0x70>
     2bf:	00 
     2c0:	45 31 c0             	xor    r8d,r8d
     2c3:	31 f6                	xor    esi,esi
     2c5:	0f 1f 00             	nop    DWORD PTR [rax]
     2c8:	4d 89 c1             	mov    r9,r8
     2cb:	4c 89 c2             	mov    rdx,r8
     2ce:	31 c0                	xor    eax,eax
     2d0:	41 81 e1 ff 7f 00 00 	and    r9d,0x7fff
     2d7:	49 01 d9             	add    r9,rbx
     2da:	41 0f b6 39          	movzx  edi,BYTE PTR [r9]
     2de:	89 f9                	mov    ecx,edi
     2e0:	01 fe                	add    esi,edi
     2e2:	eb 13                	jmp    2f7 <_Z12FTHFg463_7lpiPhb+0xa7>
     2e4:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
     2e8:	48 89 d1             	mov    rcx,rdx
     2eb:	81 e1 ff 7f 00 00    	and    ecx,0x7fff
     2f1:	0f b6 3c 0b          	movzx  edi,BYTE PTR [rbx+rcx*1]
     2f5:	89 f9                	mov    ecx,edi
     2f7:	01 fe                	add    esi,edi
     2f9:	a8 03                	test   al,0x3
     2fb:	75 0e                	jne    30b <_Z12FTHFg463_7lpiPhb+0xbb>
     2fd:	48 89 d7             	mov    rdi,rdx
     300:	01 f1                	add    ecx,esi
     302:	81 e7 ff 7f 00 00    	and    edi,0x7fff
     308:	88 0c 3b             	mov    BYTE PTR [rbx+rdi*1],cl
     30b:	83 c0 01             	add    eax,0x1
     30e:	48 83 c2 40          	add    rdx,0x40
     312:	3d 00 02 00 00       	cmp    eax,0x200
     317:	75 cf                	jne    2e8 <_Z12FTHFg463_7lpiPhb+0x98>
     319:	41 88 31             	mov    BYTE PTR [r9],sil
     31c:	49 83 c0 01          	add    r8,0x1
     320:	78 6c                	js     38e <_Z12FTHFg463_7lpiPhb+0x13e>
     322:	66 0f ef c0          	pxor   xmm0,xmm0
     326:	f2 49 0f 2a c0       	cvtsi2sd xmm0,r8
     32b:	66 0f 2f c8          	comisd xmm1,xmm0
     32f:	77 97                	ja     2c8 <_Z12FTHFg463_7lpiPhb+0x78>
     331:	48 8d 74 24 10       	lea    rsi,[rsp+0x10]
     336:	31 ff                	xor    edi,edi
     338:	e8 00 00 00 00       	call   33d <_Z12FTHFg463_7lpiPhb+0xed>
     33d:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
     342:	4c 8b 44 24 18       	mov    r8,QWORD PTR [rsp+0x18]
     347:	48 2b 0c 24          	sub    rcx,QWORD PTR [rsp]
     34b:	4c 2b 44 24 08       	sub    r8,QWORD PTR [rsp+0x8]
     350:	79 0b                	jns    35d <_Z12FTHFg463_7lpiPhb+0x10d>
     352:	49 81 c0 00 ca 9a 3b 	add    r8,0x3b9aca00
     359:	48 83 e9 01          	sub    rcx,0x1
     35d:	31 c0                	xor    eax,eax
     35f:	44 89 e2             	mov    edx,r12d
     362:	bf 01 00 00 00       	mov    edi,0x1
     367:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 36e <_Z12FTHFg463_7lpiPhb+0x11e>
     36e:	e8 00 00 00 00       	call   373 <_Z12FTHFg463_7lpiPhb+0x123>
     373:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
     378:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
     37f:	00 00 
     381:	75 43                	jne    3c6 <_Z12FTHFg463_7lpiPhb+0x176>
     383:	48 83 c4 38          	add    rsp,0x38
     387:	5b                   	pop    rbx
     388:	5d                   	pop    rbp
     389:	41 5c                	pop    r12
     38b:	41 5d                	pop    r13
     38d:	c3                   	ret
     38e:	4c 89 c0             	mov    rax,r8
     391:	4c 89 c2             	mov    rdx,r8
     394:	66 0f ef c0          	pxor   xmm0,xmm0
     398:	48 d1 e8             	shr    rax,1
     39b:	83 e2 01             	and    edx,0x1
     39e:	48 09 d0             	or     rax,rdx
     3a1:	f2 48 0f 2a c0       	cvtsi2sd xmm0,rax
     3a6:	f2 0f 58 c0          	addsd  xmm0,xmm0
     3aa:	e9 7c ff ff ff       	jmp    32b <_Z12FTHFg463_7lpiPhb+0xdb>
     3af:	44 89 e7             	mov    edi,r12d
     3b2:	e8 00 00 00 00       	call   3b7 <_Z12FTHFg463_7lpiPhb+0x167>
     3b7:	4c 89 ee             	mov    rsi,r13
     3ba:	89 c7                	mov    edi,eax
     3bc:	e8 00 00 00 00       	call   3c1 <_Z12FTHFg463_7lpiPhb+0x171>
     3c1:	e9 e8 fe ff ff       	jmp    2ae <_Z12FTHFg463_7lpiPhb+0x5e>
     3c6:	e8 00 00 00 00       	call   3cb <_Z12FTHFg463_7lpiPhb+0x17b>
     3cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000003d0 <_Z16FTH457HGS463_7lpiPhb>:
     3d0:	f3 0f 1e fa          	endbr64
     3d4:	41 55                	push   r13
     3d6:	41 54                	push   r12
     3d8:	41 89 fc             	mov    r12d,edi
     3db:	55                   	push   rbp
     3dc:	48 89 f5             	mov    rbp,rsi
     3df:	53                   	push   rbx
     3e0:	89 d3                	mov    ebx,edx
     3e2:	48 83 ec 38          	sub    rsp,0x38
     3e6:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
     3ed:	00 00 
     3ef:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
     3f4:	31 c0                	xor    eax,eax
     3f6:	e8 00 00 00 00       	call   3fb <_Z16FTH457HGS463_7lpiPhb+0x2b>
     3fb:	49 89 c5             	mov    r13,rax
     3fe:	84 db                	test   bl,bl
     400:	0f 84 5a 01 00 00    	je     560 <_Z16FTH457HGS463_7lpiPhb+0x190>
     406:	48 89 c6             	mov    rsi,rax
     409:	bf ff ff ff ff       	mov    edi,0xffffffff
     40e:	e8 00 00 00 00       	call   413 <_Z16FTH457HGS463_7lpiPhb+0x43>
     413:	bf ba 00 00 00       	mov    edi,0xba
     418:	31 c0                	xor    eax,eax
     41a:	e8 00 00 00 00       	call   41f <_Z16FTH457HGS463_7lpiPhb+0x4f>
     41f:	4c 89 ea             	mov    rdx,r13
     422:	44 89 e7             	mov    edi,r12d
     425:	48 89 c6             	mov    rsi,rax
     428:	e8 00 00 00 00       	call   42d <_Z16FTH457HGS463_7lpiPhb+0x5d>
     42d:	e8 00 00 00 00       	call   432 <_Z16FTH457HGS463_7lpiPhb+0x62>
     432:	89 c3                	mov    ebx,eax
     434:	e8 00 00 00 00       	call   439 <_Z16FTH457HGS463_7lpiPhb+0x69>
     439:	48 c1 e3 20          	shl    rbx,0x20
     43d:	48 89 e6             	mov    rsi,rsp
     440:	31 ff                	xor    edi,edi
     442:	48 98                	cdqe
     444:	48 09 c3             	or     rbx,rax
     447:	e8 00 00 00 00       	call   44c <_Z16FTH457HGS463_7lpiPhb+0x7c>
     44c:	f2 0f 10 0d 00 00 00 	movsd  xmm1,QWORD PTR [rip+0x0]        # 454 <_Z16FTH457HGS463_7lpiPhb+0x84>
     453:	00 
     454:	31 c9                	xor    ecx,ecx
     456:	31 f6                	xor    esi,esi
     458:	49 b9 00 00 00 00 00 	movabs r9,0xc000000000000000
     45f:	00 00 c0 
     462:	49 b8 d5 78 e9 26 31 	movabs r8,0x1cac083126e978d5
     469:	08 ac 1c 
     46c:	48 bf ef a7 c6 4b 37 	movabs rdi,0x4189374bc6a7ef
     473:	89 41 00 
     476:	eb 17                	jmp    48f <_Z16FTH457HGS463_7lpiPhb+0xbf>
     478:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
     47f:	00 
     480:	66 0f ef c0          	pxor   xmm0,xmm0
     484:	f2 48 0f 2a c1       	cvtsi2sd xmm0,rcx
     489:	66 0f 2f c8          	comisd xmm1,xmm0
     48d:	76 74                	jbe    503 <_Z16FTH457HGS463_7lpiPhb+0x133>
     48f:	48 89 da             	mov    rdx,rbx
     492:	48 d1 ea             	shr    rdx,1
     495:	83 e3 01             	and    ebx,0x1
     498:	74 03                	je     49d <_Z16FTH457HGS463_7lpiPhb+0xcd>
     49a:	4c 31 ca             	xor    rdx,r9
     49d:	48 89 d0             	mov    rax,rdx
     4a0:	48 89 d3             	mov    rbx,rdx
     4a3:	25 ff ff ff 0f       	and    eax,0xfffffff
     4a8:	48 d1 eb             	shr    rbx,1
     4ab:	0f b6 44 05 00       	movzx  eax,BYTE PTR [rbp+rax*1+0x0]
     4b0:	48 01 c6             	add    rsi,rax
     4b3:	83 e2 01             	and    edx,0x1
     4b6:	74 03                	je     4bb <_Z16FTH457HGS463_7lpiPhb+0xeb>
     4b8:	4c 31 cb             	xor    rbx,r9
     4bb:	48 89 c8             	mov    rax,rcx
     4be:	48 01 f3             	add    rbx,rsi
     4c1:	49 0f af c0          	imul   rax,r8
     4c5:	48 c1 c8 03          	ror    rax,0x3
     4c9:	48 39 f8             	cmp    rax,rdi
     4cc:	77 0d                	ja     4db <_Z16FTH457HGS463_7lpiPhb+0x10b>
     4ce:	48 89 d8             	mov    rax,rbx
     4d1:	25 ff ff ff 0f       	and    eax,0xfffffff
     4d6:	40 88 74 05 00       	mov    BYTE PTR [rbp+rax*1+0x0],sil
     4db:	48 83 c1 01          	add    rcx,0x1
     4df:	79 9f                	jns    480 <_Z16FTH457HGS463_7lpiPhb+0xb0>
     4e1:	48 89 c8             	mov    rax,rcx
     4e4:	48 89 ca             	mov    rdx,rcx
     4e7:	66 0f ef c0          	pxor   xmm0,xmm0
     4eb:	48 d1 e8             	shr    rax,1
     4ee:	83 e2 01             	and    edx,0x1
     4f1:	48 09 d0             	or     rax,rdx
     4f4:	f2 48 0f 2a c0       	cvtsi2sd xmm0,rax
     4f9:	f2 0f 58 c0          	addsd  xmm0,xmm0
     4fd:	66 0f 2f c8          	comisd xmm1,xmm0
     501:	77 8c                	ja     48f <_Z16FTH457HGS463_7lpiPhb+0xbf>
     503:	48 8d 74 24 10       	lea    rsi,[rsp+0x10]
     508:	31 ff                	xor    edi,edi
     50a:	e8 00 00 00 00       	call   50f <_Z16FTH457HGS463_7lpiPhb+0x13f>
     50f:	48 8b 4c 24 10       	mov    rcx,QWORD PTR [rsp+0x10]
     514:	4c 8b 44 24 18       	mov    r8,QWORD PTR [rsp+0x18]
     519:	48 2b 0c 24          	sub    rcx,QWORD PTR [rsp]
     51d:	4c 2b 44 24 08       	sub    r8,QWORD PTR [rsp+0x8]
     522:	79 0b                	jns    52f <_Z16FTH457HGS463_7lpiPhb+0x15f>
     524:	49 81 c0 00 ca 9a 3b 	add    r8,0x3b9aca00
     52b:	48 83 e9 01          	sub    rcx,0x1
     52f:	31 c0                	xor    eax,eax
     531:	44 89 e2             	mov    edx,r12d
     534:	bf 01 00 00 00       	mov    edi,0x1
     539:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 540 <_Z16FTH457HGS463_7lpiPhb+0x170>
     540:	e8 00 00 00 00       	call   545 <_Z16FTH457HGS463_7lpiPhb+0x175>
     545:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
     54a:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
     551:	00 00 
     553:	75 22                	jne    577 <_Z16FTH457HGS463_7lpiPhb+0x1a7>
     555:	48 83 c4 38          	add    rsp,0x38
     559:	5b                   	pop    rbx
     55a:	5d                   	pop    rbp
     55b:	41 5c                	pop    r12
     55d:	41 5d                	pop    r13
     55f:	c3                   	ret
     560:	44 89 e7             	mov    edi,r12d
     563:	e8 00 00 00 00       	call   568 <_Z16FTH457HGS463_7lpiPhb+0x198>
     568:	4c 89 ee             	mov    rsi,r13
     56b:	89 c7                	mov    edi,eax
     56d:	e8 00 00 00 00       	call   572 <_Z16FTH457HGS463_7lpiPhb+0x1a2>
     572:	e9 b6 fe ff ff       	jmp    42d <_Z16FTH457HGS463_7lpiPhb+0x5d>
     577:	e8 00 00 00 00       	call   57c <_Z16FTH457HGS463_7lpiPhb+0x1ac>
     57c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000000580 <_Z17FJIDR_233_DDL322Pv>:
     580:	f3 0f 1e fa          	endbr64
     584:	41 55                	push   r13
     586:	bf 00 00 00 01       	mov    edi,0x1000000
     58b:	41 54                	push   r12
     58d:	55                   	push   rbp
     58e:	bd 0a 00 00 00       	mov    ebp,0xa
     593:	53                   	push   rbx
     594:	48 83 ec 08          	sub    rsp,0x8
     598:	e8 00 00 00 00       	call   59d <_Z17FJIDR_233_DDL322Pv+0x1d>
     59d:	49 89 c4             	mov    r12,rax
     5a0:	48 8d 98 00 00 00 01 	lea    rbx,[rax+0x1000000]
     5a7:	4d 89 e5             	mov    r13,r12
     5aa:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
     5b0:	e8 00 00 00 00       	call   5b5 <_Z17FJIDR_233_DDL322Pv+0x35>
     5b5:	49 83 c5 01          	add    r13,0x1
     5b9:	99                   	cdq
     5ba:	c1 ea 18             	shr    edx,0x18
     5bd:	01 d0                	add    eax,edx
     5bf:	0f b6 c0             	movzx  eax,al
     5c2:	29 d0                	sub    eax,edx
     5c4:	41 88 45 ff          	mov    BYTE PTR [r13-0x1],al
     5c8:	49 39 dd             	cmp    r13,rbx
     5cb:	75 e3                	jne    5b0 <_Z17FJIDR_233_DDL322Pv+0x30>
     5cd:	83 ed 01             	sub    ebp,0x1
     5d0:	75 d5                	jne    5a7 <_Z17FJIDR_233_DDL322Pv+0x27>
     5d2:	48 83 c4 08          	add    rsp,0x8
     5d6:	4c 89 e7             	mov    rdi,r12
     5d9:	5b                   	pop    rbx
     5da:	5d                   	pop    rbp
     5db:	41 5c                	pop    r12
     5dd:	41 5d                	pop    r13
     5df:	e9 00 00 00 00       	jmp    5e4 <_Z17FJIDR_233_DDL322Pv+0x64>
     5e4:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
     5eb:	00 00 00 00 
     5ef:	90                   	nop

00000000000005f0 <_Z15FHHT88g2_5k0kffi>:
     5f0:	f3 0f 1e fa          	endbr64
     5f4:	41 57                	push   r15
     5f6:	41 89 f8             	mov    r8d,edi
     5f9:	ba 10 00 00 00       	mov    edx,0x10
     5fe:	48 8d 0d 00 00 00 00 	lea    rcx,[rip+0x0]        # 605 <_Z15FHHT88g2_5k0kffi+0x15>
     605:	41 56                	push   r14
     607:	41 55                	push   r13
     609:	41 54                	push   r12
     60b:	55                   	push   rbp
     60c:	53                   	push   rbx
     60d:	48 81 ec 78 04 00 00 	sub    rsp,0x478
     614:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # 61b <_Z15FHHT88g2_5k0kffi+0x2b>
     61b:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
     622:	00 00 
     624:	48 89 84 24 68 04 00 	mov    QWORD PTR [rsp+0x468],rax
     62b:	00 
     62c:	31 c0                	xor    eax,eax
     62e:	4c 8d ac 24 e0 00 00 	lea    r13,[rsp+0xe0]
     635:	00 
     636:	4c 89 ef             	mov    rdi,r13
     639:	e8 00 00 00 00       	call   63e <_Z15FHHT88g2_5k0kffi+0x4e>
     63e:	41 b8 1b 00 00 00    	mov    r8d,0x1b
     644:	31 d2                	xor    edx,edx
     646:	31 f6                	xor    esi,esi
     648:	48 8d 0d 00 00 00 00 	lea    rcx,[rip+0x0]        # 64f <_Z15FHHT88g2_5k0kffi+0x5f>
     64f:	4c 89 ef             	mov    rdi,r13
     652:	e8 00 00 00 00       	call   657 <_Z15FHHT88g2_5k0kffi+0x67>
     657:	48 8d ac 24 70 02 00 	lea    rbp,[rsp+0x270]
     65e:	00 
     65f:	48 8d 50 10          	lea    rdx,[rax+0x10]
     663:	48 89 ac 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rbp
     66a:	00 
     66b:	48 8b 08             	mov    rcx,QWORD PTR [rax]
     66e:	48 39 d1             	cmp    rcx,rdx
     671:	0f 84 a1 07 00 00    	je     e18 <_Z15FHHT88g2_5k0kffi+0x828>
     677:	48 89 8c 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rcx
     67e:	00 
     67f:	48 8b 48 10          	mov    rcx,QWORD PTR [rax+0x10]
     683:	48 89 8c 24 70 02 00 	mov    QWORD PTR [rsp+0x270],rcx
     68a:	00 
     68b:	48 8b 48 08          	mov    rcx,QWORD PTR [rax+0x8]
     68f:	48 89 8c 24 68 02 00 	mov    QWORD PTR [rsp+0x268],rcx
     696:	00 
     697:	48 c7 40 08 00 00 00 	mov    QWORD PTR [rax+0x8],0x0
     69e:	00 
     69f:	c6 40 10 00          	mov    BYTE PTR [rax+0x10],0x0
     6a3:	48 89 10             	mov    QWORD PTR [rax],rdx
     6a6:	48 b8 ff ff ff ff ff 	movabs rax,0x3fffffffffffffff
     6ad:	ff ff 3f 
     6b0:	48 2b 84 24 68 02 00 	sub    rax,QWORD PTR [rsp+0x268]
     6b7:	00 
     6b8:	48 83 f8 1d          	cmp    rax,0x1d
     6bc:	0f 86 14 0a 00 00    	jbe    10d6 <_Z15FHHT88g2_5k0kffi+0xae6>
     6c2:	4c 8d a4 24 60 02 00 	lea    r12,[rsp+0x260]
     6c9:	00 
     6ca:	ba 1e 00 00 00       	mov    edx,0x1e
     6cf:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 6d6 <_Z15FHHT88g2_5k0kffi+0xe6>
     6d6:	4c 89 e7             	mov    rdi,r12
     6d9:	e8 00 00 00 00       	call   6de <_Z15FHHT88g2_5k0kffi+0xee>
     6de:	48 8d 5c 24 70       	lea    rbx,[rsp+0x70]
     6e3:	48 8d 50 10          	lea    rdx,[rax+0x10]
     6e7:	48 89 5c 24 60       	mov    QWORD PTR [rsp+0x60],rbx
     6ec:	48 8b 08             	mov    rcx,QWORD PTR [rax]
     6ef:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
     6f4:	48 39 d1             	cmp    rcx,rdx
     6f7:	0f 84 43 07 00 00    	je     e40 <_Z15FHHT88g2_5k0kffi+0x850>
     6fd:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
     702:	48 8b 48 10          	mov    rcx,QWORD PTR [rax+0x10]
     706:	48 89 4c 24 70       	mov    QWORD PTR [rsp+0x70],rcx
     70b:	48 8b 48 08          	mov    rcx,QWORD PTR [rax+0x8]
     70f:	c6 40 10 00          	mov    BYTE PTR [rax+0x10],0x0
     713:	48 89 4c 24 68       	mov    QWORD PTR [rsp+0x68],rcx
     718:	48 89 10             	mov    QWORD PTR [rax],rdx
     71b:	48 8b bc 24 60 02 00 	mov    rdi,QWORD PTR [rsp+0x260]
     722:	00 
     723:	48 c7 40 08 00 00 00 	mov    QWORD PTR [rax+0x8],0x0
     72a:	00 
     72b:	48 39 ef             	cmp    rdi,rbp
     72e:	74 05                	je     735 <_Z15FHHT88g2_5k0kffi+0x145>
     730:	e8 00 00 00 00       	call   735 <_Z15FHHT88g2_5k0kffi+0x145>
     735:	48 8b bc 24 e0 00 00 	mov    rdi,QWORD PTR [rsp+0xe0]
     73c:	00 
     73d:	48 8d 84 24 f0 00 00 	lea    rax,[rsp+0xf0]
     744:	00 
     745:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
     74a:	48 39 c7             	cmp    rdi,rax
     74d:	74 05                	je     754 <_Z15FHHT88g2_5k0kffi+0x164>
     74f:	e8 00 00 00 00       	call   754 <_Z15FHHT88g2_5k0kffi+0x164>
     754:	4c 8d bc 24 60 03 00 	lea    r15,[rsp+0x360]
     75b:	00 
     75c:	4c 89 ff             	mov    rdi,r15
     75f:	e8 00 00 00 00       	call   764 <_Z15FHHT88g2_5k0kffi+0x174>
     764:	48 8b 1d 00 00 00 00 	mov    rbx,QWORD PTR [rip+0x0]        # 76b <_Z15FHHT88g2_5k0kffi+0x17b>
     76b:	31 d2                	xor    edx,edx
     76d:	31 f6                	xor    esi,esi
     76f:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 776 <_Z15FHHT88g2_5k0kffi+0x186>
     776:	66 89 94 24 40 04 00 	mov    WORD PTR [rsp+0x440],dx
     77d:	00 
     77e:	48 8b 0d 00 00 00 00 	mov    rcx,QWORD PTR [rip+0x0]        # 785 <_Z15FHHT88g2_5k0kffi+0x195>
     785:	48 89 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rax
     78c:	00 
     78d:	48 8b 43 e8          	mov    rax,QWORD PTR [rbx-0x18]
     791:	48 c7 84 24 38 04 00 	mov    QWORD PTR [rsp+0x438],0x0
     798:	00 00 00 00 00 
     79d:	48 c7 84 24 48 04 00 	mov    QWORD PTR [rsp+0x448],0x0
     7a4:	00 00 00 00 00 
     7a9:	48 c7 84 24 50 04 00 	mov    QWORD PTR [rsp+0x450],0x0
     7b0:	00 00 00 00 00 
     7b5:	48 c7 84 24 58 04 00 	mov    QWORD PTR [rsp+0x458],0x0
     7bc:	00 00 00 00 00 
     7c1:	48 c7 84 24 60 04 00 	mov    QWORD PTR [rsp+0x460],0x0
     7c8:	00 00 00 00 00 
     7cd:	48 89 9c 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rbx
     7d4:	00 
     7d5:	48 89 8c 04 60 02 00 	mov    QWORD PTR [rsp+rax*1+0x260],rcx
     7dc:	00 
     7dd:	48 c7 84 24 68 02 00 	mov    QWORD PTR [rsp+0x268],0x0
     7e4:	00 00 00 00 00 
     7e9:	48 8b 7b e8          	mov    rdi,QWORD PTR [rbx-0x18]
     7ed:	4c 01 e7             	add    rdi,r12
     7f0:	e8 00 00 00 00       	call   7f5 <_Z15FHHT88g2_5k0kffi+0x205>
     7f5:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 7fc <_Z15FHHT88g2_5k0kffi+0x20c>
     7fc:	48 89 ef             	mov    rdi,rbp
     7ff:	48 89 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rax
     806:	00 
     807:	48 83 c0 28          	add    rax,0x28
     80b:	48 89 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rax
     812:	00 
     813:	e8 00 00 00 00       	call   818 <_Z15FHHT88g2_5k0kffi+0x228>
     818:	48 89 ee             	mov    rsi,rbp
     81b:	4c 89 ff             	mov    rdi,r15
     81e:	e8 00 00 00 00       	call   823 <_Z15FHHT88g2_5k0kffi+0x233>
     823:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
     828:	ba 08 00 00 00       	mov    edx,0x8
     82d:	48 89 ef             	mov    rdi,rbp
     830:	e8 00 00 00 00       	call   835 <_Z15FHHT88g2_5k0kffi+0x245>
     835:	48 8b 94 24 60 02 00 	mov    rdx,QWORD PTR [rsp+0x260]
     83c:	00 
     83d:	48 8b 7a e8          	mov    rdi,QWORD PTR [rdx-0x18]
     841:	4c 01 e7             	add    rdi,r12
     844:	48 85 c0             	test   rax,rax
     847:	0f 84 e3 05 00 00    	je     e30 <_Z15FHHT88g2_5k0kffi+0x840>
     84d:	31 f6                	xor    esi,esi
     84f:	e8 00 00 00 00       	call   854 <_Z15FHHT88g2_5k0kffi+0x264>
     854:	48 8d 84 24 d8 02 00 	lea    rax,[rsp+0x2d8]
     85b:	00 
     85c:	48 89 c7             	mov    rdi,rax
     85f:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
     864:	e8 00 00 00 00       	call   869 <_Z15FHHT88g2_5k0kffi+0x279>
     869:	84 c0                	test   al,al
     86b:	0f 85 af 01 00 00    	jne    a20 <_Z15FHHT88g2_5k0kffi+0x430>
     871:	ba 0f 00 00 00       	mov    edx,0xf
     876:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 87d <_Z15FHHT88g2_5k0kffi+0x28d>
     87d:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 884 <_Z15FHHT88g2_5k0kffi+0x294>
     884:	e8 00 00 00 00       	call   889 <_Z15FHHT88g2_5k0kffi+0x299>
     889:	48 8b 54 24 68       	mov    rdx,QWORD PTR [rsp+0x68]
     88e:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
     893:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 89a <_Z15FHHT88g2_5k0kffi+0x2aa>
     89a:	e8 00 00 00 00       	call   89f <_Z15FHHT88g2_5k0kffi+0x2af>
     89f:	49 89 c5             	mov    r13,rax
     8a2:	48 8b 00             	mov    rax,QWORD PTR [rax]
     8a5:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     8a9:	4d 8b b4 05 f0 00 00 	mov    r14,QWORD PTR [r13+rax*1+0xf0]
     8b0:	00 
     8b1:	4d 85 f6             	test   r14,r14
     8b4:	0f 84 32 08 00 00    	je     10ec <_Z15FHHT88g2_5k0kffi+0xafc>
     8ba:	41 80 7e 38 00       	cmp    BYTE PTR [r14+0x38],0x0
     8bf:	0f 84 cb 05 00 00    	je     e90 <_Z15FHHT88g2_5k0kffi+0x8a0>
     8c5:	41 0f be 76 43       	movsx  esi,BYTE PTR [r14+0x43]
     8ca:	4c 89 ef             	mov    rdi,r13
     8cd:	e8 00 00 00 00       	call   8d2 <_Z15FHHT88g2_5k0kffi+0x2e2>
     8d2:	48 89 c7             	mov    rdi,rax
     8d5:	e8 00 00 00 00       	call   8da <_Z15FHHT88g2_5k0kffi+0x2ea>
     8da:	ba 0c 00 00 00       	mov    edx,0xc
     8df:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 8e6 <_Z15FHHT88g2_5k0kffi+0x2f6>
     8e6:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 8ed <_Z15FHHT88g2_5k0kffi+0x2fd>
     8ed:	e8 00 00 00 00       	call   8f2 <_Z15FHHT88g2_5k0kffi+0x302>
     8f2:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 8f9 <_Z15FHHT88g2_5k0kffi+0x309>
     8f9:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 900 <_Z15FHHT88g2_5k0kffi+0x310>
     900:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     904:	4c 8b ac 02 f0 00 00 	mov    r13,QWORD PTR [rdx+rax*1+0xf0]
     90b:	00 
     90c:	4d 85 ed             	test   r13,r13
     90f:	0f 84 dc 07 00 00    	je     10f1 <_Z15FHHT88g2_5k0kffi+0xb01>
     915:	41 80 7d 38 00       	cmp    BYTE PTR [r13+0x38],0x0
     91a:	0f 84 a8 05 00 00    	je     ec8 <_Z15FHHT88g2_5k0kffi+0x8d8>
     920:	41 0f be 75 43       	movsx  esi,BYTE PTR [r13+0x43]
     925:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 92c <_Z15FHHT88g2_5k0kffi+0x33c>
     92c:	e8 00 00 00 00       	call   931 <_Z15FHHT88g2_5k0kffi+0x341>
     931:	48 89 c7             	mov    rdi,rax
     934:	e8 00 00 00 00       	call   939 <_Z15FHHT88g2_5k0kffi+0x349>
     939:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 940 <_Z15FHHT88g2_5k0kffi+0x350>
     940:	49 c7 c4 ff ff ff ff 	mov    r12,0xffffffffffffffff
     947:	48 89 04 24          	mov    QWORD PTR [rsp],rax
     94b:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 952 <_Z15FHHT88g2_5k0kffi+0x362>
     952:	48 89 ef             	mov    rdi,rbp
     955:	48 89 84 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rax
     95c:	00 
     95d:	48 83 c0 28          	add    rax,0x28
     961:	48 89 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rax
     968:	00 
     969:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 970 <_Z15FHHT88g2_5k0kffi+0x380>
     970:	48 89 84 24 70 02 00 	mov    QWORD PTR [rsp+0x270],rax
     977:	00 
     978:	e8 00 00 00 00       	call   97d <_Z15FHHT88g2_5k0kffi+0x38d>
     97d:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
     982:	e8 00 00 00 00       	call   987 <_Z15FHHT88g2_5k0kffi+0x397>
     987:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
     98b:	48 8d bc 24 a8 02 00 	lea    rdi,[rsp+0x2a8]
     992:	00 
     993:	48 89 84 24 70 02 00 	mov    QWORD PTR [rsp+0x270],rax
     99a:	00 
     99b:	e8 00 00 00 00       	call   9a0 <_Z15FHHT88g2_5k0kffi+0x3b0>
     9a0:	48 8b 43 e8          	mov    rax,QWORD PTR [rbx-0x18]
     9a4:	48 89 9c 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rbx
     9ab:	00 
     9ac:	4c 89 ff             	mov    rdi,r15
     9af:	48 8b 1d 00 00 00 00 	mov    rbx,QWORD PTR [rip+0x0]        # 9b6 <_Z15FHHT88g2_5k0kffi+0x3c6>
     9b6:	48 89 9c 04 60 02 00 	mov    QWORD PTR [rsp+rax*1+0x260],rbx
     9bd:	00 
     9be:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 9c5 <_Z15FHHT88g2_5k0kffi+0x3d5>
     9c5:	48 c7 84 24 68 02 00 	mov    QWORD PTR [rsp+0x268],0x0
     9cc:	00 00 00 00 00 
     9d1:	48 89 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rax
     9d8:	00 
     9d9:	e8 00 00 00 00       	call   9de <_Z15FHHT88g2_5k0kffi+0x3ee>
     9de:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
     9e3:	48 3b 7c 24 08       	cmp    rdi,QWORD PTR [rsp+0x8]
     9e8:	74 05                	je     9ef <_Z15FHHT88g2_5k0kffi+0x3ff>
     9ea:	e8 00 00 00 00       	call   9ef <_Z15FHHT88g2_5k0kffi+0x3ff>
     9ef:	48 8b 84 24 68 04 00 	mov    rax,QWORD PTR [rsp+0x468]
     9f6:	00 
     9f7:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
     9fe:	00 00 
     a00:	0f 85 dc 06 00 00    	jne    10e2 <_Z15FHHT88g2_5k0kffi+0xaf2>
     a06:	48 81 c4 78 04 00 00 	add    rsp,0x478
     a0d:	4c 89 e0             	mov    rax,r12
     a10:	5b                   	pop    rbx
     a11:	5d                   	pop    rbp
     a12:	41 5c                	pop    r12
     a14:	41 5d                	pop    r13
     a16:	41 5e                	pop    r14
     a18:	41 5f                	pop    r15
     a1a:	c3                   	ret
     a1b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
     a20:	48 8d 84 24 90 00 00 	lea    rax,[rsp+0x90]
     a27:	00 
     a28:	c6 84 24 90 00 00 00 	mov    BYTE PTR [rsp+0x90],0x0
     a2f:	00 
     a30:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
     a35:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
     a3c:	00 
     a3d:	48 8b 84 24 60 02 00 	mov    rax,QWORD PTR [rsp+0x260]
     a44:	00 
     a45:	48 c7 84 24 88 00 00 	mov    QWORD PTR [rsp+0x88],0x0
     a4c:	00 00 00 00 00 
     a51:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     a55:	4c 8b b4 04 50 03 00 	mov    r14,QWORD PTR [rsp+rax*1+0x350]
     a5c:	00 
     a5d:	4d 85 f6             	test   r14,r14
     a60:	0f 84 81 06 00 00    	je     10e7 <_Z15FHHT88g2_5k0kffi+0xaf7>
     a66:	41 80 7e 38 00       	cmp    BYTE PTR [r14+0x38],0x0
     a6b:	0f 84 df 03 00 00    	je     e50 <_Z15FHHT88g2_5k0kffi+0x860>
     a71:	41 0f be 56 43       	movsx  edx,BYTE PTR [r14+0x43]
     a76:	48 8d 84 24 80 00 00 	lea    rax,[rsp+0x80]
     a7d:	00 
     a7e:	4c 89 e7             	mov    rdi,r12
     a81:	48 89 c6             	mov    rsi,rax
     a84:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
     a89:	e8 00 00 00 00       	call   a8e <_Z15FHHT88g2_5k0kffi+0x49e>
     a8e:	48 89 ef             	mov    rdi,rbp
     a91:	e8 00 00 00 00       	call   a96 <_Z15FHHT88g2_5k0kffi+0x4a6>
     a96:	48 85 c0             	test   rax,rax
     a99:	0f 84 d9 05 00 00    	je     1078 <_Z15FHHT88g2_5k0kffi+0xa88>
     a9f:	48 8d 84 24 58 01 00 	lea    rax,[rsp+0x158]
     aa6:	00 
     aa7:	48 89 c7             	mov    rdi,rax
     aaa:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
     aaf:	e8 00 00 00 00       	call   ab4 <_Z15FHHT88g2_5k0kffi+0x4c4>
     ab4:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # abb <_Z15FHHT88g2_5k0kffi+0x4cb>
     abb:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # ac2 <_Z15FHHT88g2_5k0kffi+0x4d2>
     ac2:	48 c7 84 24 30 02 00 	mov    QWORD PTR [rsp+0x230],0x0
     ac9:	00 00 00 00 00 
     ace:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
     ad5:	00 
     ad6:	31 c0                	xor    eax,eax
     ad8:	66 89 84 24 38 02 00 	mov    WORD PTR [rsp+0x238],ax
     adf:	00 
     ae0:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # ae7 <_Z15FHHT88g2_5k0kffi+0x4f7>
     ae7:	48 c7 84 24 40 02 00 	mov    QWORD PTR [rsp+0x240],0x0
     aee:	00 00 00 00 00 
     af3:	48 89 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rax
     afa:	00 
     afb:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     aff:	48 c7 84 24 48 02 00 	mov    QWORD PTR [rsp+0x248],0x0
     b06:	00 00 00 00 00 
     b0b:	48 c7 84 24 50 02 00 	mov    QWORD PTR [rsp+0x250],0x0
     b12:	00 00 00 00 00 
     b17:	48 c7 84 24 58 02 00 	mov    QWORD PTR [rsp+0x258],0x0
     b1e:	00 00 00 00 00 
     b23:	48 89 b4 04 e0 00 00 	mov    QWORD PTR [rsp+rax*1+0xe0],rsi
     b2a:	00 
     b2b:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # b32 <_Z15FHHT88g2_5k0kffi+0x542>
     b32:	31 f6                	xor    esi,esi
     b34:	48 c7 84 24 e8 00 00 	mov    QWORD PTR [rsp+0xe8],0x0
     b3b:	00 00 00 00 00 
     b40:	48 8b 78 e8          	mov    rdi,QWORD PTR [rax-0x18]
     b44:	4c 01 ef             	add    rdi,r13
     b47:	e8 00 00 00 00       	call   b4c <_Z15FHHT88g2_5k0kffi+0x55c>
     b4c:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # b53 <_Z15FHHT88g2_5k0kffi+0x563>
     b53:	48 c7 84 24 f8 00 00 	mov    QWORD PTR [rsp+0xf8],0x0
     b5a:	00 00 00 00 00 
     b5f:	48 89 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rax
     b66:	00 
     b67:	48 83 c0 28          	add    rax,0x28
     b6b:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
     b72:	00 
     b73:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # b7a <_Z15FHHT88g2_5k0kffi+0x58a>
     b7a:	48 89 04 24          	mov    QWORD PTR [rsp],rax
     b7e:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
     b85:	00 
     b86:	48 8d 84 24 28 01 00 	lea    rax,[rsp+0x128]
     b8d:	00 
     b8e:	48 89 c7             	mov    rdi,rax
     b91:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
     b96:	48 c7 84 24 00 01 00 	mov    QWORD PTR [rsp+0x100],0x0
     b9d:	00 00 00 00 00 
     ba2:	48 c7 84 24 08 01 00 	mov    QWORD PTR [rsp+0x108],0x0
     ba9:	00 00 00 00 00 
     bae:	48 c7 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],0x0
     bb5:	00 00 00 00 00 
     bba:	48 c7 84 24 18 01 00 	mov    QWORD PTR [rsp+0x118],0x0
     bc1:	00 00 00 00 00 
     bc6:	48 c7 84 24 20 01 00 	mov    QWORD PTR [rsp+0x120],0x0
     bcd:	00 00 00 00 00 
     bd2:	e8 00 00 00 00       	call   bd7 <_Z15FHHT88g2_5k0kffi+0x5e7>
     bd7:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # bde <_Z15FHHT88g2_5k0kffi+0x5ee>
     bde:	4c 8b b4 24 88 00 00 	mov    r14,QWORD PTR [rsp+0x88]
     be5:	00 
     be6:	48 8d 8c 24 48 01 00 	lea    rcx,[rsp+0x148]
     bed:	00 
     bee:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
     bf5:	00 
     bf6:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
     bfd:	00 
     bfe:	c7 84 24 30 01 00 00 	mov    DWORD PTR [rsp+0x130],0x0
     c05:	00 00 00 00 
     c09:	48 89 c6             	mov    rsi,rax
     c0c:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
     c11:	4c 01 f6             	add    rsi,r14
     c14:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
     c19:	48 89 8c 24 38 01 00 	mov    QWORD PTR [rsp+0x138],rcx
     c20:	00 
     c21:	74 09                	je     c2c <_Z15FHHT88g2_5k0kffi+0x63c>
     c23:	48 85 c0             	test   rax,rax
     c26:	0f 84 ca 04 00 00    	je     10f6 <_Z15FHHT88g2_5k0kffi+0xb06>
     c2c:	4c 89 74 24 58       	mov    QWORD PTR [rsp+0x58],r14
     c31:	49 83 fe 0f          	cmp    r14,0xf
     c35:	0f 87 3d 03 00 00    	ja     f78 <_Z15FHHT88g2_5k0kffi+0x988>
     c3b:	49 83 fe 01          	cmp    r14,0x1
     c3f:	0f 85 bb 02 00 00    	jne    f00 <_Z15FHHT88g2_5k0kffi+0x910>
     c45:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
     c4a:	0f b6 00             	movzx  eax,BYTE PTR [rax]
     c4d:	88 84 24 48 01 00 00 	mov    BYTE PTR [rsp+0x148],al
     c54:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
     c59:	4c 89 b4 24 40 01 00 	mov    QWORD PTR [rsp+0x140],r14
     c60:	00 
     c61:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
     c66:	31 c9                	xor    ecx,ecx
     c68:	31 d2                	xor    edx,edx
     c6a:	42 c6 04 30 00       	mov    BYTE PTR [rax+r14*1],0x0
     c6f:	48 8b b4 24 38 01 00 	mov    rsi,QWORD PTR [rsp+0x138]
     c76:	00 
     c77:	c7 84 24 30 01 00 00 	mov    DWORD PTR [rsp+0x130],0x8
     c7e:	08 00 00 00 
     c82:	e8 00 00 00 00       	call   c87 <_Z15FHHT88g2_5k0kffi+0x697>
     c87:	48 8b 74 24 10       	mov    rsi,QWORD PTR [rsp+0x10]
     c8c:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
     c91:	e8 00 00 00 00       	call   c96 <_Z15FHHT88g2_5k0kffi+0x6a6>
     c96:	48 8d 84 24 b0 00 00 	lea    rax,[rsp+0xb0]
     c9d:	00 
     c9e:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
     ca3:	31 d2                	xor    edx,edx
     ca5:	be 2c 00 00 00       	mov    esi,0x2c
     caa:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
     caf:	4c 8d b4 24 a0 00 00 	lea    r14,[rsp+0xa0]
     cb6:	00 
     cb7:	48 89 84 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rax
     cbe:	00 
     cbf:	48 8d 84 24 d0 00 00 	lea    rax,[rsp+0xd0]
     cc6:	00 
     cc7:	48 c7 84 24 a8 00 00 	mov    QWORD PTR [rsp+0xa8],0x0
     cce:	00 00 00 00 00 
     cd3:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [rsp+0xb0],0x0
     cda:	00 
     cdb:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
     ce0:	48 89 84 24 c0 00 00 	mov    QWORD PTR [rsp+0xc0],rax
     ce7:	00 
     ce8:	48 c7 84 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],0x0
     cef:	00 00 00 00 00 
     cf4:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [rsp+0xd0],0x0
     cfb:	00 
     cfc:	e8 00 00 00 00       	call   d01 <_Z15FHHT88g2_5k0kffi+0x711>
     d01:	48 83 f8 ff          	cmp    rax,0xffffffffffffffff
     d05:	0f 84 0d 02 00 00    	je     f18 <_Z15FHHT88g2_5k0kffi+0x928>
     d0b:	ba 2c 00 00 00       	mov    edx,0x2c
     d10:	4c 89 f6             	mov    rsi,r14
     d13:	4c 89 ef             	mov    rdi,r13
     d16:	e8 00 00 00 00       	call   d1b <_Z15FHHT88g2_5k0kffi+0x72b>
     d1b:	48 8b 10             	mov    rdx,QWORD PTR [rax]
     d1e:	48 8b 52 e8          	mov    rdx,QWORD PTR [rdx-0x18]
     d22:	f6 44 10 20 05       	test   BYTE PTR [rax+rdx*1+0x20],0x5
     d27:	0f 84 9b 02 00 00    	je     fc8 <_Z15FHHT88g2_5k0kffi+0x9d8>
     d2d:	49 c7 c4 ff ff ff ff 	mov    r12,0xffffffffffffffff
     d34:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
     d3b:	00 
     d3c:	48 3b 7c 24 48       	cmp    rdi,QWORD PTR [rsp+0x48]
     d41:	74 05                	je     d48 <_Z15FHHT88g2_5k0kffi+0x758>
     d43:	e8 00 00 00 00       	call   d48 <_Z15FHHT88g2_5k0kffi+0x758>
     d48:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
     d4f:	00 
     d50:	48 3b 7c 24 10       	cmp    rdi,QWORD PTR [rsp+0x10]
     d55:	74 05                	je     d5c <_Z15FHHT88g2_5k0kffi+0x76c>
     d57:	e8 00 00 00 00       	call   d5c <_Z15FHHT88g2_5k0kffi+0x76c>
     d5c:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # d63 <_Z15FHHT88g2_5k0kffi+0x773>
     d63:	48 8b bc 24 38 01 00 	mov    rdi,QWORD PTR [rsp+0x138]
     d6a:	00 
     d6b:	48 89 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rax
     d72:	00 
     d73:	48 83 c0 28          	add    rax,0x28
     d77:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
     d7e:	00 
     d7f:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # d86 <_Z15FHHT88g2_5k0kffi+0x796>
     d86:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
     d8d:	00 
     d8e:	48 3b 7c 24 28       	cmp    rdi,QWORD PTR [rsp+0x28]
     d93:	74 05                	je     d9a <_Z15FHHT88g2_5k0kffi+0x7aa>
     d95:	e8 00 00 00 00       	call   d9a <_Z15FHHT88g2_5k0kffi+0x7aa>
     d9a:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
     d9e:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
     da3:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
     daa:	00 
     dab:	e8 00 00 00 00       	call   db0 <_Z15FHHT88g2_5k0kffi+0x7c0>
     db0:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # db7 <_Z15FHHT88g2_5k0kffi+0x7c7>
     db7:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
     dbc:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # dc3 <_Z15FHHT88g2_5k0kffi+0x7d3>
     dc3:	48 89 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rax
     dca:	00 
     dcb:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     dcf:	48 89 b4 04 e0 00 00 	mov    QWORD PTR [rsp+rax*1+0xe0],rsi
     dd6:	00 
     dd7:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # dde <_Z15FHHT88g2_5k0kffi+0x7ee>
     dde:	48 c7 84 24 e8 00 00 	mov    QWORD PTR [rsp+0xe8],0x0
     de5:	00 00 00 00 00 
     dea:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
     df1:	00 
     df2:	e8 00 00 00 00       	call   df7 <_Z15FHHT88g2_5k0kffi+0x807>
     df7:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
     dfe:	00 
     dff:	48 3b 7c 24 40       	cmp    rdi,QWORD PTR [rsp+0x40]
     e04:	0f 84 41 fb ff ff    	je     94b <_Z15FHHT88g2_5k0kffi+0x35b>
     e0a:	e8 00 00 00 00       	call   e0f <_Z15FHHT88g2_5k0kffi+0x81f>
     e0f:	e9 37 fb ff ff       	jmp    94b <_Z15FHHT88g2_5k0kffi+0x35b>
     e14:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
     e18:	f3 0f 6f 40 10       	movdqu xmm0,XMMWORD PTR [rax+0x10]
     e1d:	0f 29 84 24 70 02 00 	movaps XMMWORD PTR [rsp+0x270],xmm0
     e24:	00 
     e25:	e9 61 f8 ff ff       	jmp    68b <_Z15FHHT88g2_5k0kffi+0x9b>
     e2a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
     e30:	8b 77 20             	mov    esi,DWORD PTR [rdi+0x20]
     e33:	83 ce 04             	or     esi,0x4
     e36:	e8 00 00 00 00       	call   e3b <_Z15FHHT88g2_5k0kffi+0x84b>
     e3b:	e9 14 fa ff ff       	jmp    854 <_Z15FHHT88g2_5k0kffi+0x264>
     e40:	f3 0f 6f 48 10       	movdqu xmm1,XMMWORD PTR [rax+0x10]
     e45:	0f 29 4c 24 70       	movaps XMMWORD PTR [rsp+0x70],xmm1
     e4a:	e9 bc f8 ff ff       	jmp    70b <_Z15FHHT88g2_5k0kffi+0x11b>
     e4f:	90                   	nop
     e50:	4c 89 f7             	mov    rdi,r14
     e53:	e8 00 00 00 00       	call   e58 <_Z15FHHT88g2_5k0kffi+0x868>
     e58:	49 8b 06             	mov    rax,QWORD PTR [r14]
     e5b:	48 8d 0d 00 00 00 00 	lea    rcx,[rip+0x0]        # e62 <_Z15FHHT88g2_5k0kffi+0x872>
     e62:	ba 0a 00 00 00       	mov    edx,0xa
     e67:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
     e6b:	48 39 c8             	cmp    rax,rcx
     e6e:	0f 84 02 fc ff ff    	je     a76 <_Z15FHHT88g2_5k0kffi+0x486>
     e74:	be 0a 00 00 00       	mov    esi,0xa
     e79:	4c 89 f7             	mov    rdi,r14
     e7c:	ff d0                	call   rax
     e7e:	0f be d0             	movsx  edx,al
     e81:	e9 f0 fb ff ff       	jmp    a76 <_Z15FHHT88g2_5k0kffi+0x486>
     e86:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
     e8d:	00 00 00 
     e90:	4c 89 f7             	mov    rdi,r14
     e93:	e8 00 00 00 00       	call   e98 <_Z15FHHT88g2_5k0kffi+0x8a8>
     e98:	49 8b 06             	mov    rax,QWORD PTR [r14]
     e9b:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # ea2 <_Z15FHHT88g2_5k0kffi+0x8b2>
     ea2:	be 0a 00 00 00       	mov    esi,0xa
     ea7:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
     eab:	48 39 d0             	cmp    rax,rdx
     eae:	0f 84 16 fa ff ff    	je     8ca <_Z15FHHT88g2_5k0kffi+0x2da>
     eb4:	4c 89 f7             	mov    rdi,r14
     eb7:	ff d0                	call   rax
     eb9:	0f be f0             	movsx  esi,al
     ebc:	e9 09 fa ff ff       	jmp    8ca <_Z15FHHT88g2_5k0kffi+0x2da>
     ec1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
     ec8:	4c 89 ef             	mov    rdi,r13
     ecb:	e8 00 00 00 00       	call   ed0 <_Z15FHHT88g2_5k0kffi+0x8e0>
     ed0:	49 8b 45 00          	mov    rax,QWORD PTR [r13+0x0]
     ed4:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # edb <_Z15FHHT88g2_5k0kffi+0x8eb>
     edb:	be 0a 00 00 00       	mov    esi,0xa
     ee0:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
     ee4:	48 39 d0             	cmp    rax,rdx
     ee7:	0f 84 38 fa ff ff    	je     925 <_Z15FHHT88g2_5k0kffi+0x335>
     eed:	4c 89 ef             	mov    rdi,r13
     ef0:	ff d0                	call   rax
     ef2:	0f be f0             	movsx  esi,al
     ef5:	e9 2b fa ff ff       	jmp    925 <_Z15FHHT88g2_5k0kffi+0x335>
     efa:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
     f00:	4d 85 f6             	test   r14,r14
     f03:	0f 85 fe 01 00 00    	jne    1107 <_Z15FHHT88g2_5k0kffi+0xb17>
     f09:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
     f0e:	e9 46 fd ff ff       	jmp    c59 <_Z15FHHT88g2_5k0kffi+0x669>
     f13:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
     f18:	48 8b 7c 24 30       	mov    rdi,QWORD PTR [rsp+0x30]
     f1d:	31 d2                	xor    edx,edx
     f1f:	be 2d 00 00 00       	mov    esi,0x2d
     f24:	e8 00 00 00 00       	call   f29 <_Z15FHHT88g2_5k0kffi+0x939>
     f29:	48 83 f8 ff          	cmp    rax,0xffffffffffffffff
     f2d:	0f 84 fa fd ff ff    	je     d2d <_Z15FHHT88g2_5k0kffi+0x73d>
     f33:	ba 2d 00 00 00       	mov    edx,0x2d
     f38:	4c 89 f6             	mov    rsi,r14
     f3b:	4c 89 ef             	mov    rdi,r13
     f3e:	e8 00 00 00 00       	call   f43 <_Z15FHHT88g2_5k0kffi+0x953>
     f43:	48 8b 10             	mov    rdx,QWORD PTR [rax]
     f46:	48 8b 52 e8          	mov    rdx,QWORD PTR [rdx-0x18]
     f4a:	f6 44 10 20 05       	test   BYTE PTR [rax+rdx*1+0x20],0x5
     f4f:	0f 85 d8 fd ff ff    	jne    d2d <_Z15FHHT88g2_5k0kffi+0x73d>
     f55:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
     f5c:	00 
     f5d:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     f61:	4c 8b b4 04 d0 01 00 	mov    r14,QWORD PTR [rsp+rax*1+0x1d0]
     f68:	00 
     f69:	4d 85 f6             	test   r14,r14
     f6c:	75 77                	jne    fe5 <_Z15FHHT88g2_5k0kffi+0x9f5>
     f6e:	e8 00 00 00 00       	call   f73 <_Z15FHHT88g2_5k0kffi+0x983>
     f73:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
     f78:	48 8d 74 24 58       	lea    rsi,[rsp+0x58]
     f7d:	48 8d bc 24 38 01 00 	lea    rdi,[rsp+0x138]
     f84:	00 
     f85:	31 d2                	xor    edx,edx
     f87:	e8 00 00 00 00       	call   f8c <_Z15FHHT88g2_5k0kffi+0x99c>
     f8c:	48 89 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],rax
     f93:	00 
     f94:	48 89 c7             	mov    rdi,rax
     f97:	48 8b 44 24 58       	mov    rax,QWORD PTR [rsp+0x58]
     f9c:	48 89 84 24 48 01 00 	mov    QWORD PTR [rsp+0x148],rax
     fa3:	00 
     fa4:	48 8b 74 24 48       	mov    rsi,QWORD PTR [rsp+0x48]
     fa9:	4c 89 f2             	mov    rdx,r14
     fac:	e8 00 00 00 00       	call   fb1 <_Z15FHHT88g2_5k0kffi+0x9c1>
     fb1:	4c 8b 74 24 58       	mov    r14,QWORD PTR [rsp+0x58]
     fb6:	48 8b 84 24 38 01 00 	mov    rax,QWORD PTR [rsp+0x138]
     fbd:	00 
     fbe:	e9 96 fc ff ff       	jmp    c59 <_Z15FHHT88g2_5k0kffi+0x669>
     fc3:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
     fc8:	48 8b 84 24 e0 00 00 	mov    rax,QWORD PTR [rsp+0xe0]
     fcf:	00 
     fd0:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
     fd4:	4c 8b b4 04 d0 01 00 	mov    r14,QWORD PTR [rsp+rax*1+0x1d0]
     fdb:	00 
     fdc:	4d 85 f6             	test   r14,r14
     fdf:	0f 84 1d 01 00 00    	je     1102 <_Z15FHHT88g2_5k0kffi+0xb12>
     fe5:	41 80 7e 38 00       	cmp    BYTE PTR [r14+0x38],0x0
     fea:	0f 84 b0 00 00 00    	je     10a0 <_Z15FHHT88g2_5k0kffi+0xab0>
     ff0:	41 0f be 56 43       	movsx  edx,BYTE PTR [r14+0x43]
     ff5:	48 8d b4 24 c0 00 00 	lea    rsi,[rsp+0xc0]
     ffc:	00 
     ffd:	4c 89 ef             	mov    rdi,r13
    1000:	e8 00 00 00 00       	call   1005 <_Z15FHHT88g2_5k0kffi+0xa15>
    1005:	48 8b 10             	mov    rdx,QWORD PTR [rax]
    1008:	48 8b 52 e8          	mov    rdx,QWORD PTR [rdx-0x18]
    100c:	f6 44 10 20 05       	test   BYTE PTR [rax+rdx*1+0x20],0x5
    1011:	0f 85 16 fd ff ff    	jne    d2d <_Z15FHHT88g2_5k0kffi+0x73d>
    1017:	4c 8b 35 00 00 00 00 	mov    r14,QWORD PTR [rip+0x0]        # 101e <_Z15FHHT88g2_5k0kffi+0xa2e>
    101e:	48 8b 94 24 a0 00 00 	mov    rdx,QWORD PTR [rsp+0xa0]
    1025:	00 
    1026:	41 b8 0a 00 00 00    	mov    r8d,0xa
    102c:	31 c9                	xor    ecx,ecx
    102e:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 1035 <_Z15FHHT88g2_5k0kffi+0xa45>
    1035:	4c 89 f7             	mov    rdi,r14
    1038:	e8 00 00 00 00       	call   103d <_Z15FHHT88g2_5k0kffi+0xa4d>
    103d:	41 b8 0a 00 00 00    	mov    r8d,0xa
    1043:	31 c9                	xor    ecx,ecx
    1045:	4c 89 f7             	mov    rdi,r14
    1048:	89 44 24 30          	mov    DWORD PTR [rsp+0x30],eax
    104c:	48 8b 94 24 c0 00 00 	mov    rdx,QWORD PTR [rsp+0xc0]
    1053:	00 
    1054:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 105b <_Z15FHHT88g2_5k0kffi+0xa6b>
    105b:	e8 00 00 00 00       	call   1060 <_Z15FHHT88g2_5k0kffi+0xa70>
    1060:	44 8b 64 24 30       	mov    r12d,DWORD PTR [rsp+0x30]
    1065:	48 c1 e0 20          	shl    rax,0x20
    1069:	49 09 c4             	or     r12,rax
    106c:	e9 c3 fc ff ff       	jmp    d34 <_Z15FHHT88g2_5k0kffi+0x744>
    1071:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1078:	48 8b 84 24 60 02 00 	mov    rax,QWORD PTR [rsp+0x260]
    107f:	00 
    1080:	48 8b 78 e8          	mov    rdi,QWORD PTR [rax-0x18]
    1084:	4c 01 e7             	add    rdi,r12
    1087:	8b 77 20             	mov    esi,DWORD PTR [rdi+0x20]
    108a:	83 ce 04             	or     esi,0x4
    108d:	e8 00 00 00 00       	call   1092 <_Z15FHHT88g2_5k0kffi+0xaa2>
    1092:	e9 08 fa ff ff       	jmp    a9f <_Z15FHHT88g2_5k0kffi+0x4af>
    1097:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    109e:	00 00 
    10a0:	4c 89 f7             	mov    rdi,r14
    10a3:	e8 00 00 00 00       	call   10a8 <_Z15FHHT88g2_5k0kffi+0xab8>
    10a8:	49 8b 06             	mov    rax,QWORD PTR [r14]
    10ab:	48 8d 0d 00 00 00 00 	lea    rcx,[rip+0x0]        # 10b2 <_Z15FHHT88g2_5k0kffi+0xac2>
    10b2:	ba 0a 00 00 00       	mov    edx,0xa
    10b7:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
    10bb:	48 39 c8             	cmp    rax,rcx
    10be:	0f 84 31 ff ff ff    	je     ff5 <_Z15FHHT88g2_5k0kffi+0xa05>
    10c4:	be 0a 00 00 00       	mov    esi,0xa
    10c9:	4c 89 f7             	mov    rdi,r14
    10cc:	ff d0                	call   rax
    10ce:	0f be d0             	movsx  edx,al
    10d1:	e9 1f ff ff ff       	jmp    ff5 <_Z15FHHT88g2_5k0kffi+0xa05>
    10d6:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 10dd <_Z15FHHT88g2_5k0kffi+0xaed>
    10dd:	e8 00 00 00 00       	call   10e2 <_Z15FHHT88g2_5k0kffi+0xaf2>
    10e2:	e8 00 00 00 00       	call   10e7 <_Z15FHHT88g2_5k0kffi+0xaf7>
    10e7:	e8 00 00 00 00       	call   10ec <_Z15FHHT88g2_5k0kffi+0xafc>
    10ec:	e8 00 00 00 00       	call   10f1 <_Z15FHHT88g2_5k0kffi+0xb01>
    10f1:	e8 00 00 00 00       	call   10f6 <_Z15FHHT88g2_5k0kffi+0xb06>
    10f6:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 10fd <_Z15FHHT88g2_5k0kffi+0xb0d>
    10fd:	e8 00 00 00 00       	call   1102 <_Z15FHHT88g2_5k0kffi+0xb12>
    1102:	e8 00 00 00 00       	call   1107 <_Z15FHHT88g2_5k0kffi+0xb17>
    1107:	48 8b 7c 24 28       	mov    rdi,QWORD PTR [rsp+0x28]
    110c:	e9 93 fe ff ff       	jmp    fa4 <_Z15FHHT88g2_5k0kffi+0x9b4>
    1111:	f3 0f 1e fa          	endbr64
    1115:	48 89 c5             	mov    rbp,rax
    1118:	e9 00 00 00 00       	jmp    111d <_Z15FHHT88g2_5k0kffi+0xb2d>
    111d:	f3 0f 1e fa          	endbr64
    1121:	48 89 c5             	mov    rbp,rax
    1124:	e9 00 00 00 00       	jmp    1129 <_Z15FHHT88g2_5k0kffi+0xb39>
    1129:	f3 0f 1e fa          	endbr64
    112d:	48 89 c5             	mov    rbp,rax
    1130:	e9 00 00 00 00       	jmp    1135 <_Z15FHHT88g2_5k0kffi+0xb45>
    1135:	f3 0f 1e fa          	endbr64
    1139:	48 89 c5             	mov    rbp,rax
    113c:	e9 00 00 00 00       	jmp    1141 <_Z15FHHT88g2_5k0kffi+0xb51>
    1141:	f3 0f 1e fa          	endbr64
    1145:	48 89 c3             	mov    rbx,rax
    1148:	e9 00 00 00 00       	jmp    114d <_Z15FHHT88g2_5k0kffi+0xb5d>
    114d:	f3 0f 1e fa          	endbr64
    1151:	48 89 c3             	mov    rbx,rax
    1154:	e9 00 00 00 00       	jmp    1159 <_Z15FHHT88g2_5k0kffi+0xb69>
    1159:	f3 0f 1e fa          	endbr64
    115d:	48 89 c3             	mov    rbx,rax
    1160:	e9 00 00 00 00       	jmp    1165 <_Z15FHHT88g2_5k0kffi+0xb75>
    1165:	f3 0f 1e fa          	endbr64
    1169:	48 89 c5             	mov    rbp,rax
    116c:	e9 00 00 00 00       	jmp    1171 <_Z15FHHT88g2_5k0kffi+0xb81>
    1171:	f3 0f 1e fa          	endbr64
    1175:	49 89 c4             	mov    r12,rax
    1178:	e9 00 00 00 00       	jmp    117d <_Z15FHHT88g2_5k0kffi+0xb8d>
    117d:	f3 0f 1e fa          	endbr64
    1181:	48 89 c5             	mov    rbp,rax
    1184:	e9 00 00 00 00       	jmp    1189 <_Z15FHHT88g2_5k0kffi+0xb99>
    1189:	f3 0f 1e fa          	endbr64
    118d:	48 89 c3             	mov    rbx,rax
    1190:	e9 00 00 00 00       	jmp    1195 <_Z15FHHT88g2_5k0kffi+0xba5>
    1195:	f3 0f 1e fa          	endbr64
    1199:	48 89 c5             	mov    rbp,rax
    119c:	e9 00 00 00 00       	jmp    11a1 <_Z15FHHT88g2_5k0kffi+0xbb1>
    11a1:	f3 0f 1e fa          	endbr64
    11a5:	48 89 c7             	mov    rdi,rax
    11a8:	e9 00 00 00 00       	jmp    11ad <_Z15FHHT88g2_5k0kffi+0xbbd>
    11ad:	0f 1f 00             	nop    DWORD PTR [rax]

00000000000011b0 <_Z16LFJIDR_233_DDLKRv>:
    11b0:	f3 0f 1e fa          	endbr64
    11b4:	41 57                	push   r15
    11b6:	41 56                	push   r14
    11b8:	41 55                	push   r13
    11ba:	49 89 fd             	mov    r13,rdi
    11bd:	41 54                	push   r12
    11bf:	55                   	push   rbp
    11c0:	53                   	push   rbx
    11c1:	48 83 ec 58          	sub    rsp,0x58
    11c5:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    11cc:	00 00 
    11ce:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
    11d3:	31 c0                	xor    eax,eax
    11d5:	48 c7 07 00 00 00 00 	mov    QWORD PTR [rdi],0x0
    11dc:	4c 8d 74 24 18       	lea    r14,[rsp+0x18]
    11e1:	48 c7 47 08 00 00 00 	mov    QWORD PTR [rdi+0x8],0x0
    11e8:	00 
    11e9:	48 c7 47 10 00 00 00 	mov    QWORD PTR [rdi+0x10],0x0
    11f0:	00 
    11f1:	c7 44 24 18 00 00 00 	mov    DWORD PTR [rsp+0x18],0x0
    11f8:	00 
    11f9:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
    1200:	00 00 
    1202:	4c 89 74 24 28       	mov    QWORD PTR [rsp+0x28],r14
    1207:	4c 89 74 24 30       	mov    QWORD PTR [rsp+0x30],r14
    120c:	48 c7 44 24 38 00 00 	mov    QWORD PTR [rsp+0x38],0x0
    1213:	00 00 
    1215:	e8 00 00 00 00       	call   121a <_Z16LFJIDR_233_DDLKRv+0x6a>
    121a:	85 c0                	test   eax,eax
    121c:	0f 8e fe 00 00 00    	jle    1320 <_Z16LFJIDR_233_DDLKRv+0x170>
    1222:	89 c5                	mov    ebp,eax
    1224:	31 db                	xor    ebx,ebx
    1226:	4c 8d 64 24 10       	lea    r12,[rsp+0x10]
    122b:	eb 1a                	jmp    1247 <_Z16LFJIDR_233_DDLKRv+0x97>
    122d:	0f 1f 00             	nop    DWORD PTR [rax]
    1230:	48 83 7c 24 38 03    	cmp    QWORD PTR [rsp+0x38],0x3
    1236:	0f 87 e4 00 00 00    	ja     1320 <_Z16LFJIDR_233_DDLKRv+0x170>
    123c:	83 c3 01             	add    ebx,0x1
    123f:	39 dd                	cmp    ebp,ebx
    1241:	0f 84 d9 00 00 00    	je     1320 <_Z16LFJIDR_233_DDLKRv+0x170>
    1247:	89 df                	mov    edi,ebx
    1249:	4d 89 e7             	mov    r15,r12
    124c:	e8 00 00 00 00       	call   1251 <_Z16LFJIDR_233_DDLKRv+0xa1>
    1251:	48 89 c1             	mov    rcx,rax
    1254:	89 04 24             	mov    DWORD PTR [rsp],eax
    1257:	89 c6                	mov    esi,eax
    1259:	48 c1 f9 20          	sar    rcx,0x20
    125d:	89 4c 24 04          	mov    DWORD PTR [rsp+0x4],ecx
    1261:	41 89 c9             	mov    r9d,ecx
    1264:	83 f9 ff             	cmp    ecx,0xffffffff
    1267:	74 c7                	je     1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    1269:	83 f8 ff             	cmp    eax,0xffffffff
    126c:	74 c2                	je     1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    126e:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
    1273:	48 85 ff             	test   rdi,rdi
    1276:	74 61                	je     12d9 <_Z16LFJIDR_233_DDLKRv+0x129>
    1278:	48 89 fa             	mov    rdx,rdi
    127b:	4d 89 f0             	mov    r8,r14
    127e:	eb 0c                	jmp    128c <_Z16LFJIDR_233_DDLKRv+0xdc>
    1280:	49 89 d0             	mov    r8,rdx
    1283:	48 8b 52 10          	mov    rdx,QWORD PTR [rdx+0x10]
    1287:	48 85 d2             	test   rdx,rdx
    128a:	74 0e                	je     129a <_Z16LFJIDR_233_DDLKRv+0xea>
    128c:	3b 72 20             	cmp    esi,DWORD PTR [rdx+0x20]
    128f:	7e ef                	jle    1280 <_Z16LFJIDR_233_DDLKRv+0xd0>
    1291:	48 8b 52 18          	mov    rdx,QWORD PTR [rdx+0x18]
    1295:	48 85 d2             	test   rdx,rdx
    1298:	75 f2                	jne    128c <_Z16LFJIDR_233_DDLKRv+0xdc>
    129a:	4d 39 f0             	cmp    r8,r14
    129d:	74 06                	je     12a5 <_Z16LFJIDR_233_DDLKRv+0xf5>
    129f:	41 3b 40 20          	cmp    eax,DWORD PTR [r8+0x20]
    12a3:	7d 8b                	jge    1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    12a5:	4c 89 f0             	mov    rax,r14
    12a8:	eb 12                	jmp    12bc <_Z16LFJIDR_233_DDLKRv+0x10c>
    12aa:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    12b0:	48 89 f8             	mov    rax,rdi
    12b3:	48 8b 7f 10          	mov    rdi,QWORD PTR [rdi+0x10]
    12b7:	48 85 ff             	test   rdi,rdi
    12ba:	74 0f                	je     12cb <_Z16LFJIDR_233_DDLKRv+0x11b>
    12bc:	44 3b 4f 20          	cmp    r9d,DWORD PTR [rdi+0x20]
    12c0:	7e ee                	jle    12b0 <_Z16LFJIDR_233_DDLKRv+0x100>
    12c2:	48 8b 7f 18          	mov    rdi,QWORD PTR [rdi+0x18]
    12c6:	48 85 ff             	test   rdi,rdi
    12c9:	75 f1                	jne    12bc <_Z16LFJIDR_233_DDLKRv+0x10c>
    12cb:	4c 39 f0             	cmp    rax,r14
    12ce:	74 09                	je     12d9 <_Z16LFJIDR_233_DDLKRv+0x129>
    12d0:	3b 48 20             	cmp    ecx,DWORD PTR [rax+0x20]
    12d3:	0f 8d 57 ff ff ff    	jge    1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    12d9:	48 89 e6             	mov    rsi,rsp
    12dc:	4c 89 e7             	mov    rdi,r12
    12df:	4d 89 e7             	mov    r15,r12
    12e2:	e8 00 00 00 00       	call   12e7 <_Z16LFJIDR_233_DDLKRv+0x137>
    12e7:	48 8d 74 24 04       	lea    rsi,[rsp+0x4]
    12ec:	4c 89 e7             	mov    rdi,r12
    12ef:	e8 00 00 00 00       	call   12f4 <_Z16LFJIDR_233_DDLKRv+0x144>
    12f4:	8b 14 24             	mov    edx,DWORD PTR [rsp]
    12f7:	8b 44 24 04          	mov    eax,DWORD PTR [rsp+0x4]
    12fb:	49 8b 75 08          	mov    rsi,QWORD PTR [r13+0x8]
    12ff:	89 54 24 08          	mov    DWORD PTR [rsp+0x8],edx
    1303:	89 44 24 0c          	mov    DWORD PTR [rsp+0xc],eax
    1307:	49 3b 75 10          	cmp    rsi,QWORD PTR [r13+0x10]
    130b:	74 52                	je     135f <_Z16LFJIDR_233_DDLKRv+0x1af>
    130d:	89 16                	mov    DWORD PTR [rsi],edx
    130f:	48 83 c6 08          	add    rsi,0x8
    1313:	89 46 fc             	mov    DWORD PTR [rsi-0x4],eax
    1316:	49 89 75 08          	mov    QWORD PTR [r13+0x8],rsi
    131a:	e9 11 ff ff ff       	jmp    1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    131f:	90                   	nop
    1320:	49 8b 45 08          	mov    rax,QWORD PTR [r13+0x8]
    1324:	49 2b 45 00          	sub    rax,QWORD PTR [r13+0x0]
    1328:	48 83 f8 0f          	cmp    rax,0xf
    132c:	76 43                	jbe    1371 <_Z16LFJIDR_233_DDLKRv+0x1c1>
    132e:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
    1333:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
    1338:	e8 00 00 00 00       	call   133d <_Z16LFJIDR_233_DDLKRv+0x18d>
    133d:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
    1342:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
    1349:	00 00 
    134b:	75 5c                	jne    13a9 <_Z16LFJIDR_233_DDLKRv+0x1f9>
    134d:	48 83 c4 58          	add    rsp,0x58
    1351:	4c 89 e8             	mov    rax,r13
    1354:	5b                   	pop    rbx
    1355:	5d                   	pop    rbp
    1356:	41 5c                	pop    r12
    1358:	41 5d                	pop    r13
    135a:	41 5e                	pop    r14
    135c:	41 5f                	pop    r15
    135e:	c3                   	ret
    135f:	48 8d 54 24 08       	lea    rdx,[rsp+0x8]
    1364:	4c 89 ef             	mov    rdi,r13
    1367:	e8 00 00 00 00       	call   136c <_Z16LFJIDR_233_DDLKRv+0x1bc>
    136c:	e9 bf fe ff ff       	jmp    1230 <_Z16LFJIDR_233_DDLKRv+0x80>
    1371:	ba 35 00 00 00       	mov    edx,0x35
    1376:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 137d <_Z16LFJIDR_233_DDLKRv+0x1cd>
    137d:	4c 8d 7c 24 10       	lea    r15,[rsp+0x10]
    1382:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 1389 <_Z16LFJIDR_233_DDLKRv+0x1d9>
    1389:	e8 00 00 00 00       	call   138e <_Z16LFJIDR_233_DDLKRv+0x1de>
    138e:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 1395 <_Z16LFJIDR_233_DDLKRv+0x1e5>
    1395:	4c 8d 7c 24 10       	lea    r15,[rsp+0x10]
    139a:	e8 00 00 00 00       	call   139f <_Z16LFJIDR_233_DDLKRv+0x1ef>
    139f:	bf 01 00 00 00       	mov    edi,0x1
    13a4:	e8 00 00 00 00       	call   13a9 <_Z16LFJIDR_233_DDLKRv+0x1f9>
    13a9:	e8 00 00 00 00       	call   13ae <_Z16LFJIDR_233_DDLKRv+0x1fe>
    13ae:	f3 0f 1e fa          	endbr64
    13b2:	48 89 c5             	mov    rbp,rax
    13b5:	e9 00 00 00 00       	jmp    13ba <_Z16LFJIDR_233_DDLKRv+0x20a>
    13ba:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

00000000000013c0 <work_init>:
    13c0:	f3 0f 1e fa          	endbr64
    13c4:	41 56                	push   r14
    13c6:	41 55                	push   r13
    13c8:	41 54                	push   r12
    13ca:	55                   	push   rbp
    13cb:	53                   	push   rbx
    13cc:	48 83 ec 50          	sub    rsp,0x50
    13d0:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    13d7:	00 00 
    13d9:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
    13de:	31 c0                	xor    eax,eax
    13e0:	4c 8d 64 24 20       	lea    r12,[rsp+0x20]
    13e5:	89 3d 00 00 00 00    	mov    DWORD PTR [rip+0x0],edi        # 13eb <work_init+0x2b>
    13eb:	e8 00 00 00 00       	call   13f0 <work_init+0x30>
    13f0:	4c 89 e7             	mov    rdi,r12
    13f3:	e8 00 00 00 00       	call   13f8 <work_init+0x38>
    13f8:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
    13fd:	48 8b 3d 00 00 00 00 	mov    rdi,QWORD PTR [rip+0x0]        # 1404 <work_init+0x44>
    1404:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
    140b:	00 00 
    140d:	48 89 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],rax        # 1414 <work_init+0x54>
    1414:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
    1419:	48 c7 44 24 28 00 00 	mov    QWORD PTR [rsp+0x28],0x0
    1420:	00 00 
    1422:	48 89 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],rax        # 1429 <work_init+0x69>
    1429:	48 8b 44 24 30       	mov    rax,QWORD PTR [rsp+0x30]
    142e:	48 c7 44 24 30 00 00 	mov    QWORD PTR [rsp+0x30],0x0
    1435:	00 00 
    1437:	48 89 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],rax        # 143e <work_init+0x7e>
    143e:	48 85 ff             	test   rdi,rdi
    1441:	74 14                	je     1457 <work_init+0x97>
    1443:	e8 00 00 00 00       	call   1448 <work_init+0x88>
    1448:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
    144d:	48 85 ff             	test   rdi,rdi
    1450:	74 05                	je     1457 <work_init+0x97>
    1452:	e8 00 00 00 00       	call   1457 <work_init+0x97>
    1457:	ba 20 00 00 00       	mov    edx,0x20
    145c:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 1463 <work_init+0xa3>
    1463:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 146a <work_init+0xaa>
    146a:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
    1471:	00 
    1472:	48 c7 44 24 08 00 00 	mov    QWORD PTR [rsp+0x8],0x0
    1479:	00 00 
    147b:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
    1482:	00 00 
    1484:	e8 00 00 00 00       	call   1489 <work_init+0xc9>
    1489:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1490 <work_init+0xd0>
    1490:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 1497 <work_init+0xd7>
    1497:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
    149b:	48 8b ac 02 f0 00 00 	mov    rbp,QWORD PTR [rdx+rax*1+0xf0]
    14a2:	00 
    14a3:	48 85 ed             	test   rbp,rbp
    14a6:	0f 84 1d 03 00 00    	je     17c9 <work_init+0x409>
    14ac:	80 7d 38 00          	cmp    BYTE PTR [rbp+0x38],0x0
    14b0:	0f 84 92 02 00 00    	je     1748 <work_init+0x388>
    14b6:	0f be 75 43          	movsx  esi,BYTE PTR [rbp+0x43]
    14ba:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 14c1 <work_init+0x101>
    14c1:	e8 00 00 00 00       	call   14c6 <work_init+0x106>
    14c6:	48 89 c7             	mov    rdi,rax
    14c9:	e8 00 00 00 00       	call   14ce <work_init+0x10e>
    14ce:	bf 00 80 00 00       	mov    edi,0x8000
    14d3:	e8 00 00 00 00       	call   14d8 <work_init+0x118>
    14d8:	ba 0e 00 00 00       	mov    edx,0xe
    14dd:	be 00 80 00 00       	mov    esi,0x8000
    14e2:	48 89 c5             	mov    rbp,rax
    14e5:	48 89 c7             	mov    rdi,rax
    14e8:	e8 00 00 00 00       	call   14ed <work_init+0x12d>
    14ed:	49 89 ed             	mov    r13,rbp
    14f0:	48 8d 9d 00 80 00 00 	lea    rbx,[rbp+0x8000]
    14f7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    14fe:	00 00 
    1500:	e8 00 00 00 00       	call   1505 <work_init+0x145>
    1505:	49 83 c5 01          	add    r13,0x1
    1509:	99                   	cdq
    150a:	c1 ea 18             	shr    edx,0x18
    150d:	01 d0                	add    eax,edx
    150f:	0f b6 c0             	movzx  eax,al
    1512:	29 d0                	sub    eax,edx
    1514:	41 88 45 ff          	mov    BYTE PTR [r13-0x1],al
    1518:	4c 39 eb             	cmp    rbx,r13
    151b:	75 e3                	jne    1500 <work_init+0x140>
    151d:	31 db                	xor    ebx,ebx
    151f:	4c 8d 2d 00 00 00 00 	lea    r13,[rip+0x0]        # 1526 <work_init+0x166>
    1526:	49 89 e6             	mov    r14,rsp
    1529:	c6 44 24 38 00       	mov    BYTE PTR [rsp+0x38],0x0
    152e:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
    1533:	4c 89 6c 24 20       	mov    QWORD PTR [rsp+0x20],r13
    1538:	89 5c 24 28          	mov    DWORD PTR [rsp+0x28],ebx
    153c:	48 89 6c 24 30       	mov    QWORD PTR [rsp+0x30],rbp
    1541:	48 3b 74 24 10       	cmp    rsi,QWORD PTR [rsp+0x10]
    1546:	0f 84 2e 02 00 00    	je     177a <work_init+0x3ba>
    154c:	66 0f 6f 4c 24 20    	movdqa xmm1,XMMWORD PTR [rsp+0x20]
    1552:	48 83 c6 20          	add    rsi,0x20
    1556:	0f 11 4e e0          	movups XMMWORD PTR [rsi-0x20],xmm1
    155a:	66 0f 6f 54 24 30    	movdqa xmm2,XMMWORD PTR [rsp+0x30]
    1560:	0f 11 56 f0          	movups XMMWORD PTR [rsi-0x10],xmm2
    1564:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
    1569:	83 fb 01             	cmp    ebx,0x1
    156c:	0f 85 b4 01 00 00    	jne    1726 <work_init+0x366>
    1572:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 1579 <work_init+0x1b9>
    1579:	bf 00 00 00 10       	mov    edi,0x10000000
    157e:	c6 44 24 38 01       	mov    BYTE PTR [rsp+0x38],0x1
    1583:	31 db                	xor    ebx,ebx
    1585:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
    158a:	c7 44 24 28 02 00 00 	mov    DWORD PTR [rsp+0x28],0x2
    1591:	00 
    1592:	e8 00 00 00 00       	call   1597 <work_init+0x1d7>
    1597:	ba 0e 00 00 00       	mov    edx,0xe
    159c:	be 00 00 00 10       	mov    esi,0x10000000
    15a1:	48 89 c7             	mov    rdi,rax
    15a4:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
    15a9:	e8 00 00 00 00       	call   15ae <work_init+0x1ee>
    15ae:	66 90                	xchg   ax,ax
    15b0:	e8 00 00 00 00       	call   15b5 <work_init+0x1f5>
    15b5:	99                   	cdq
    15b6:	c1 ea 18             	shr    edx,0x18
    15b9:	01 d0                	add    eax,edx
    15bb:	0f b6 c0             	movzx  eax,al
    15be:	29 d0                	sub    eax,edx
    15c0:	48 8b 54 24 30       	mov    rdx,QWORD PTR [rsp+0x30]
    15c5:	88 04 1a             	mov    BYTE PTR [rdx+rbx*1],al
    15c8:	48 83 c3 01          	add    rbx,0x1
    15cc:	48 81 fb 00 00 00 10 	cmp    rbx,0x10000000
    15d3:	75 db                	jne    15b0 <work_init+0x1f0>
    15d5:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
    15da:	48 3b 74 24 10       	cmp    rsi,QWORD PTR [rsp+0x10]
    15df:	0f 84 cf 01 00 00    	je     17b4 <work_init+0x3f4>
    15e5:	66 0f 6f 5c 24 20    	movdqa xmm3,XMMWORD PTR [rsp+0x20]
    15eb:	48 83 c6 20          	add    rsi,0x20
    15ef:	0f 11 5e e0          	movups XMMWORD PTR [rsi-0x20],xmm3
    15f3:	66 0f 6f 64 24 30    	movdqa xmm4,XMMWORD PTR [rsp+0x30]
    15f9:	0f 11 66 f0          	movups XMMWORD PTR [rsi-0x10],xmm4
    15fd:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
    1602:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
    1606:	4c 8b 0d 00 00 00 00 	mov    r9,QWORD PTR [rip+0x0]        # 160d <work_init+0x24d>
    160d:	48 8d 1d 00 00 00 00 	lea    rbx,[rip+0x0]        # 1614 <work_init+0x254>
    1614:	48 29 fe             	sub    rsi,rdi
    1617:	4c 89 c9             	mov    rcx,r9
    161a:	49 89 f0             	mov    r8,rsi
    161d:	48 89 f2             	mov    rdx,rsi
    1620:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # 1627 <work_init+0x267>
    1627:	49 c1 f8 05          	sar    r8,0x5
    162b:	48 29 f1             	sub    rcx,rsi
    162e:	4c 89 c0             	mov    rax,r8
    1631:	48 c1 f9 05          	sar    rcx,0x5
    1635:	49 39 c8             	cmp    r8,rcx
    1638:	0f 87 4c 01 00 00    	ja     178a <work_init+0x3ca>
    163e:	49 39 c8             	cmp    r8,rcx
    1641:	0f 82 e9 00 00 00    	jb     1730 <work_init+0x370>
    1647:	48 85 c0             	test   rax,rax
    164a:	0f 84 9b 00 00 00    	je     16eb <work_init+0x32b>
    1650:	48 c1 e0 05          	shl    rax,0x5
    1654:	48 01 f0             	add    rax,rsi
    1657:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    165e:	00 00 
    1660:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [rsi+0x8],0xffffffff
    1667:	48 83 c6 20          	add    rsi,0x20
    166b:	48 39 f0             	cmp    rax,rsi
    166e:	75 f0                	jne    1660 <work_init+0x2a0>
    1670:	31 ed                	xor    ebp,ebp
    1672:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    1678:	e8 00 00 00 00       	call   167d <work_init+0x2bd>
    167d:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
    1681:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
    1686:	31 d2                	xor    edx,edx
    1688:	48 98                	cdqe
    168a:	48 8b 33             	mov    rsi,QWORD PTR [rbx]
    168d:	48 29 f9             	sub    rcx,rdi
    1690:	48 c1 f9 05          	sar    rcx,0x5
    1694:	48 f7 f1             	div    rcx
    1697:	89 d0                	mov    eax,edx
    1699:	eb 11                	jmp    16ac <work_init+0x2ec>
    169b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
    16a0:	83 c0 01             	add    eax,0x1
    16a3:	31 d2                	xor    edx,edx
    16a5:	48 98                	cdqe
    16a7:	48 f7 f1             	div    rcx
    16aa:	89 d0                	mov    eax,edx
    16ac:	48 63 d2             	movsxd rdx,edx
    16af:	48 c1 e2 05          	shl    rdx,0x5
    16b3:	48 01 f2             	add    rdx,rsi
    16b6:	83 7a 08 ff          	cmp    DWORD PTR [rdx+0x8],0xffffffff
    16ba:	75 e4                	jne    16a0 <work_init+0x2e0>
    16bc:	49 89 e8             	mov    r8,rbp
    16bf:	48 83 c5 01          	add    rbp,0x1
    16c3:	49 c1 e0 05          	shl    r8,0x5
    16c7:	49 01 f8             	add    r8,rdi
    16ca:	f3 41 0f 6f 00       	movdqu xmm0,XMMWORD PTR [r8]
    16cf:	0f 11 02             	movups XMMWORD PTR [rdx],xmm0
    16d2:	4d 8b 48 10          	mov    r9,QWORD PTR [r8+0x10]
    16d6:	4c 89 4a 10          	mov    QWORD PTR [rdx+0x10],r9
    16da:	45 0f b6 40 18       	movzx  r8d,BYTE PTR [r8+0x18]
    16df:	89 42 08             	mov    DWORD PTR [rdx+0x8],eax
    16e2:	44 88 42 18          	mov    BYTE PTR [rdx+0x18],r8b
    16e6:	48 39 cd             	cmp    rbp,rcx
    16e9:	72 8d                	jb     1678 <work_init+0x2b8>
    16eb:	48 8b 1d 00 00 00 00 	mov    rbx,QWORD PTR [rip+0x0]        # 16f2 <work_init+0x332>
    16f2:	48 29 f3             	sub    rbx,rsi
    16f5:	48 c1 fb 05          	sar    rbx,0x5
    16f9:	48 85 ff             	test   rdi,rdi
    16fc:	74 05                	je     1703 <work_init+0x343>
    16fe:	e8 00 00 00 00       	call   1703 <work_init+0x343>
    1703:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
    1708:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
    170f:	00 00 
    1711:	0f 85 b7 00 00 00    	jne    17ce <work_init+0x40e>
    1717:	48 83 c4 50          	add    rsp,0x50
    171b:	89 d8                	mov    eax,ebx
    171d:	5b                   	pop    rbx
    171e:	5d                   	pop    rbp
    171f:	41 5c                	pop    r12
    1721:	41 5d                	pop    r13
    1723:	41 5e                	pop    r14
    1725:	c3                   	ret
    1726:	bb 01 00 00 00       	mov    ebx,0x1
    172b:	e9 f9 fd ff ff       	jmp    1529 <work_init+0x169>
    1730:	48 01 f2             	add    rdx,rsi
    1733:	49 39 d1             	cmp    r9,rdx
    1736:	0f 84 0b ff ff ff    	je     1647 <work_init+0x287>
    173c:	48 89 15 00 00 00 00 	mov    QWORD PTR [rip+0x0],rdx        # 1743 <work_init+0x383>
    1743:	e9 ff fe ff ff       	jmp    1647 <work_init+0x287>
    1748:	48 89 ef             	mov    rdi,rbp
    174b:	e8 00 00 00 00       	call   1750 <work_init+0x390>
    1750:	48 8b 45 00          	mov    rax,QWORD PTR [rbp+0x0]
    1754:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 175b <work_init+0x39b>
    175b:	be 0a 00 00 00       	mov    esi,0xa
    1760:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
    1764:	48 39 d0             	cmp    rax,rdx
    1767:	0f 84 4d fd ff ff    	je     14ba <work_init+0xfa>
    176d:	48 89 ef             	mov    rdi,rbp
    1770:	ff d0                	call   rax
    1772:	0f be f0             	movsx  esi,al
    1775:	e9 40 fd ff ff       	jmp    14ba <work_init+0xfa>
    177a:	4c 89 e2             	mov    rdx,r12
    177d:	4c 89 f7             	mov    rdi,r14
    1780:	e8 00 00 00 00       	call   1785 <work_init+0x3c5>
    1785:	e9 df fd ff ff       	jmp    1569 <work_init+0x1a9>
    178a:	4c 89 c6             	mov    rsi,r8
    178d:	48 89 df             	mov    rdi,rbx
    1790:	48 29 ce             	sub    rsi,rcx
    1793:	e8 00 00 00 00       	call   1798 <work_init+0x3d8>
    1798:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
    179c:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
    17a1:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # 17a8 <work_init+0x3e8>
    17a8:	48 29 f8             	sub    rax,rdi
    17ab:	48 c1 f8 05          	sar    rax,0x5
    17af:	e9 93 fe ff ff       	jmp    1647 <work_init+0x287>
    17b4:	48 89 e7             	mov    rdi,rsp
    17b7:	4c 89 e2             	mov    rdx,r12
    17ba:	e8 00 00 00 00       	call   17bf <work_init+0x3ff>
    17bf:	48 8b 74 24 08       	mov    rsi,QWORD PTR [rsp+0x8]
    17c4:	e9 39 fe ff ff       	jmp    1602 <work_init+0x242>
    17c9:	e8 00 00 00 00       	call   17ce <work_init+0x40e>
    17ce:	e8 00 00 00 00       	call   17d3 <work_init+0x413>
    17d3:	f3 0f 1e fa          	endbr64
    17d7:	48 89 c5             	mov    rbp,rax
    17da:	e9 00 00 00 00       	jmp    17df <work_init+0x41f>
    17df:	90                   	nop

00000000000017e0 <work_start_monitoring>:
    17e0:	f3 0f 1e fa          	endbr64
    17e4:	41 57                	push   r15
    17e6:	ba 1f 00 00 00       	mov    edx,0x1f
    17eb:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 17f2 <work_start_monitoring+0x12>
    17f2:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 17f9 <work_start_monitoring+0x19>
    17f9:	41 56                	push   r14
    17fb:	41 55                	push   r13
    17fd:	41 54                	push   r12
    17ff:	55                   	push   rbp
    1800:	53                   	push   rbx
    1801:	48 83 ec 38          	sub    rsp,0x38
    1805:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    180c:	00 00 
    180e:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
    1813:	31 c0                	xor    eax,eax
    1815:	e8 00 00 00 00       	call   181a <work_start_monitoring+0x3a>
    181a:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1821 <work_start_monitoring+0x41>
    1821:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 1828 <work_start_monitoring+0x48>
    1828:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
    182c:	48 8b ac 02 f0 00 00 	mov    rbp,QWORD PTR [rdx+rax*1+0xf0]
    1833:	00 
    1834:	48 85 ed             	test   rbp,rbp
    1837:	0f 84 ef 01 00 00    	je     1a2c <work_start_monitoring+0x24c>
    183d:	80 7d 38 00          	cmp    BYTE PTR [rbp+0x38],0x0
    1841:	0f 84 a9 01 00 00    	je     19f0 <work_start_monitoring+0x210>
    1847:	0f be 75 43          	movsx  esi,BYTE PTR [rbp+0x43]
    184b:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 1852 <work_start_monitoring+0x72>
    1852:	31 db                	xor    ebx,ebx
    1854:	4c 8d 74 24 10       	lea    r14,[rsp+0x10]
    1859:	e8 00 00 00 00       	call   185e <work_start_monitoring+0x7e>
    185e:	4c 8d 3d 00 00 00 00 	lea    r15,[rip+0x0]        # 1865 <work_start_monitoring+0x85>
    1865:	48 89 c7             	mov    rdi,rax
    1868:	e8 00 00 00 00       	call   186d <work_start_monitoring+0x8d>
    186d:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
    1874:	00 00 
    1876:	48 c7 44 24 18 00 00 	mov    QWORD PTR [rsp+0x18],0x0
    187d:	00 00 
    187f:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
    1886:	00 00 
    1888:	e8 00 00 00 00       	call   188d <work_start_monitoring+0xad>
    188d:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1894 <work_start_monitoring+0xb4>
    1894:	48 3b 05 00 00 00 00 	cmp    rax,QWORD PTR [rip+0x0]        # 189b <work_start_monitoring+0xbb>
    189b:	0f 84 f8 00 00 00    	je     1999 <work_start_monitoring+0x1b9>
    18a1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    18a8:	48 89 da             	mov    rdx,rbx
    18ab:	bf 28 00 00 00       	mov    edi,0x28
    18b0:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
    18b7:	00 
    18b8:	48 c1 e2 05          	shl    rdx,0x5
    18bc:	48 01 d0             	add    rax,rdx
    18bf:	4c 8b 68 10          	mov    r13,QWORD PTR [rax+0x10]
    18c3:	44 8b 60 08          	mov    r12d,DWORD PTR [rax+0x8]
    18c7:	48 8b 28             	mov    rbp,QWORD PTR [rax]
    18ca:	e8 00 00 00 00       	call   18cf <work_start_monitoring+0xef>
    18cf:	48 89 68 20          	mov    QWORD PTR [rax+0x20],rbp
    18d3:	48 8b 15 00 00 00 00 	mov    rdx,QWORD PTR [rip+0x0]        # 18da <work_start_monitoring+0xfa>
    18da:	48 89 e5             	mov    rbp,rsp
    18dd:	48 8d 74 24 08       	lea    rsi,[rsp+0x8]
    18e2:	4c 89 38             	mov    QWORD PTR [rax],r15
    18e5:	48 89 ef             	mov    rdi,rbp
    18e8:	c6 40 08 01          	mov    BYTE PTR [rax+0x8],0x1
    18ec:	4c 89 68 10          	mov    QWORD PTR [rax+0x10],r13
    18f0:	44 89 60 18          	mov    DWORD PTR [rax+0x18],r12d
    18f4:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
    18f9:	e8 00 00 00 00       	call   18fe <work_start_monitoring+0x11e>
    18fe:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
    1903:	48 85 ff             	test   rdi,rdi
    1906:	74 06                	je     190e <work_start_monitoring+0x12e>
    1908:	48 8b 07             	mov    rax,QWORD PTR [rdi]
    190b:	ff 50 08             	call   QWORD PTR [rax+0x8]
    190e:	48 89 ee             	mov    rsi,rbp
    1911:	4c 89 f7             	mov    rdi,r14
    1914:	e8 00 00 00 00       	call   1919 <work_start_monitoring+0x139>
    1919:	48 8b 2c 24          	mov    rbp,QWORD PTR [rsp]
    191d:	48 85 ed             	test   rbp,rbp
    1920:	0f 85 fc 00 00 00    	jne    1a22 <work_start_monitoring+0x242>
    1926:	48 8b 0d 00 00 00 00 	mov    rcx,QWORD PTR [rip+0x0]        # 192d <work_start_monitoring+0x14d>
    192d:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1934 <work_start_monitoring+0x154>
    1934:	48 83 c3 01          	add    rbx,0x1
    1938:	4c 8d 25 00 00 00 00 	lea    r12,[rip+0x0]        # 193f <work_start_monitoring+0x15f>
    193f:	48 89 ca             	mov    rdx,rcx
    1942:	48 29 c2             	sub    rdx,rax
    1945:	48 c1 fa 05          	sar    rdx,0x5
    1949:	48 39 d3             	cmp    rbx,rdx
    194c:	0f 82 56 ff ff ff    	jb     18a8 <work_start_monitoring+0xc8>
    1952:	48 39 c8             	cmp    rax,rcx
    1955:	74 42                	je     1999 <work_start_monitoring+0x1b9>
    1957:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
    195e:	00 00 
    1960:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
    1965:	48 8d 3c e8          	lea    rdi,[rax+rbp*8]
    1969:	e8 00 00 00 00       	call   196e <work_start_monitoring+0x18e>
    196e:	48 89 e8             	mov    rax,rbp
    1971:	48 c1 e0 05          	shl    rax,0x5
    1975:	49 03 04 24          	add    rax,QWORD PTR [r12]
    1979:	8b 78 08             	mov    edi,DWORD PTR [rax+0x8]
    197c:	e8 00 00 00 00       	call   1981 <work_start_monitoring+0x1a1>
    1981:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1988 <work_start_monitoring+0x1a8>
    1988:	49 2b 04 24          	sub    rax,QWORD PTR [r12]
    198c:	48 83 c5 01          	add    rbp,0x1
    1990:	48 c1 f8 05          	sar    rax,0x5
    1994:	48 39 c5             	cmp    rbp,rax
    1997:	72 c7                	jb     1960 <work_start_monitoring+0x180>
    1999:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
    199e:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
    19a3:	48 39 fa             	cmp    rdx,rdi
    19a6:	74 17                	je     19bf <work_start_monitoring+0x1df>
    19a8:	48 89 f8             	mov    rax,rdi
    19ab:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
    19b0:	48 83 38 00          	cmp    QWORD PTR [rax],0x0
    19b4:	75 6c                	jne    1a22 <work_start_monitoring+0x242>
    19b6:	48 83 c0 08          	add    rax,0x8
    19ba:	48 39 c2             	cmp    rdx,rax
    19bd:	75 f1                	jne    19b0 <work_start_monitoring+0x1d0>
    19bf:	48 85 ff             	test   rdi,rdi
    19c2:	74 05                	je     19c9 <work_start_monitoring+0x1e9>
    19c4:	e8 00 00 00 00       	call   19c9 <work_start_monitoring+0x1e9>
    19c9:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
    19ce:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
    19d5:	00 00 
    19d7:	75 4e                	jne    1a27 <work_start_monitoring+0x247>
    19d9:	48 83 c4 38          	add    rsp,0x38
    19dd:	5b                   	pop    rbx
    19de:	5d                   	pop    rbp
    19df:	41 5c                	pop    r12
    19e1:	41 5d                	pop    r13
    19e3:	41 5e                	pop    r14
    19e5:	41 5f                	pop    r15
    19e7:	c3                   	ret
    19e8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
    19ef:	00 
    19f0:	48 89 ef             	mov    rdi,rbp
    19f3:	e8 00 00 00 00       	call   19f8 <work_start_monitoring+0x218>
    19f8:	48 8b 45 00          	mov    rax,QWORD PTR [rbp+0x0]
    19fc:	be 0a 00 00 00       	mov    esi,0xa
    1a01:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 1a08 <work_start_monitoring+0x228>
    1a08:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
    1a0c:	48 39 d0             	cmp    rax,rdx
    1a0f:	0f 84 36 fe ff ff    	je     184b <work_start_monitoring+0x6b>
    1a15:	48 89 ef             	mov    rdi,rbp
    1a18:	ff d0                	call   rax
    1a1a:	0f be f0             	movsx  esi,al
    1a1d:	e9 29 fe ff ff       	jmp    184b <work_start_monitoring+0x6b>
    1a22:	e8 00 00 00 00       	call   1a27 <work_start_monitoring+0x247>
    1a27:	e8 00 00 00 00       	call   1a2c <work_start_monitoring+0x24c>
    1a2c:	e8 00 00 00 00       	call   1a31 <work_start_monitoring+0x251>
    1a31:	f3 0f 1e fa          	endbr64
    1a35:	48 89 c5             	mov    rbp,rax
    1a38:	e9 00 00 00 00       	jmp    1a3d <work_start_monitoring+0x25d>
    1a3d:	f3 0f 1e fa          	endbr64
    1a41:	48 89 c5             	mov    rbp,rax
    1a44:	e9 00 00 00 00       	jmp    1a49 <work_start_monitoring+0x269>
    1a49:	f3 0f 1e fa          	endbr64
    1a4d:	48 89 c5             	mov    rbp,rax
    1a50:	e9 00 00 00 00       	jmp    1a55 <work_start_monitoring+0x275>
    1a55:	66 66 2e 0f 1f 84 00 	data16 cs nop WORD PTR [rax+rax*1+0x0]
    1a5c:	00 00 00 00 

0000000000001a60 <work_run>:
    1a60:	f3 0f 1e fa          	endbr64
    1a64:	41 57                	push   r15
    1a66:	ba 1c 00 00 00       	mov    edx,0x1c
    1a6b:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 1a72 <work_run+0x12>
    1a72:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 1a79 <work_run+0x19>
    1a79:	41 56                	push   r14
    1a7b:	41 55                	push   r13
    1a7d:	41 54                	push   r12
    1a7f:	55                   	push   rbp
    1a80:	53                   	push   rbx
    1a81:	48 83 ec 38          	sub    rsp,0x38
    1a85:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    1a8c:	00 00 
    1a8e:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
    1a93:	31 c0                	xor    eax,eax
    1a95:	e8 00 00 00 00       	call   1a9a <work_run+0x3a>
    1a9a:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1aa1 <work_run+0x41>
    1aa1:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 1aa8 <work_run+0x48>
    1aa8:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
    1aac:	48 8b ac 02 f0 00 00 	mov    rbp,QWORD PTR [rdx+rax*1+0xf0]
    1ab3:	00 
    1ab4:	48 85 ed             	test   rbp,rbp
    1ab7:	0f 84 cf 01 00 00    	je     1c8c <work_run+0x22c>
    1abd:	80 7d 38 00          	cmp    BYTE PTR [rbp+0x38],0x0
    1ac1:	0f 84 89 01 00 00    	je     1c50 <work_run+0x1f0>
    1ac7:	0f be 75 43          	movsx  esi,BYTE PTR [rbp+0x43]
    1acb:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 1ad2 <work_run+0x72>
    1ad2:	31 db                	xor    ebx,ebx
    1ad4:	4c 8d 74 24 10       	lea    r14,[rsp+0x10]
    1ad9:	e8 00 00 00 00       	call   1ade <work_run+0x7e>
    1ade:	4c 8d 3d 00 00 00 00 	lea    r15,[rip+0x0]        # 1ae5 <work_run+0x85>
    1ae5:	48 89 c7             	mov    rdi,rax
    1ae8:	e8 00 00 00 00       	call   1aed <work_run+0x8d>
    1aed:	48 c7 44 24 10 00 00 	mov    QWORD PTR [rsp+0x10],0x0
    1af4:	00 00 
    1af6:	48 c7 44 24 18 00 00 	mov    QWORD PTR [rsp+0x18],0x0
    1afd:	00 00 
    1aff:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
    1b06:	00 00 
    1b08:	e8 00 00 00 00       	call   1b0d <work_run+0xad>
    1b0d:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1b14 <work_run+0xb4>
    1b14:	48 39 05 00 00 00 00 	cmp    QWORD PTR [rip+0x0],rax        # 1b1b <work_run+0xbb>
    1b1b:	0f 84 a5 00 00 00    	je     1bc6 <work_run+0x166>
    1b21:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1b28:	48 89 da             	mov    rdx,rbx
    1b2b:	bf 28 00 00 00       	mov    edi,0x28
    1b30:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
    1b37:	00 
    1b38:	48 c1 e2 05          	shl    rdx,0x5
    1b3c:	48 01 d0             	add    rax,rdx
    1b3f:	4c 8b 68 10          	mov    r13,QWORD PTR [rax+0x10]
    1b43:	44 8b 60 08          	mov    r12d,DWORD PTR [rax+0x8]
    1b47:	48 8b 28             	mov    rbp,QWORD PTR [rax]
    1b4a:	e8 00 00 00 00       	call   1b4f <work_run+0xef>
    1b4f:	48 89 68 20          	mov    QWORD PTR [rax+0x20],rbp
    1b53:	48 8b 15 00 00 00 00 	mov    rdx,QWORD PTR [rip+0x0]        # 1b5a <work_run+0xfa>
    1b5a:	48 89 e5             	mov    rbp,rsp
    1b5d:	48 8d 74 24 08       	lea    rsi,[rsp+0x8]
    1b62:	4c 89 38             	mov    QWORD PTR [rax],r15
    1b65:	48 89 ef             	mov    rdi,rbp
    1b68:	c6 40 08 00          	mov    BYTE PTR [rax+0x8],0x0
    1b6c:	4c 89 68 10          	mov    QWORD PTR [rax+0x10],r13
    1b70:	44 89 60 18          	mov    DWORD PTR [rax+0x18],r12d
    1b74:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
    1b79:	e8 00 00 00 00       	call   1b7e <work_run+0x11e>
    1b7e:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
    1b83:	48 85 ff             	test   rdi,rdi
    1b86:	74 06                	je     1b8e <work_run+0x12e>
    1b88:	48 8b 07             	mov    rax,QWORD PTR [rdi]
    1b8b:	ff 50 08             	call   QWORD PTR [rax+0x8]
    1b8e:	48 89 ee             	mov    rsi,rbp
    1b91:	4c 89 f7             	mov    rdi,r14
    1b94:	e8 00 00 00 00       	call   1b99 <work_run+0x139>
    1b99:	48 83 3c 24 00       	cmp    QWORD PTR [rsp],0x0
    1b9e:	0f 85 de 00 00 00    	jne    1c82 <work_run+0x222>
    1ba4:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # 1bab <work_run+0x14b>
    1bab:	48 8b 15 00 00 00 00 	mov    rdx,QWORD PTR [rip+0x0]        # 1bb2 <work_run+0x152>
    1bb2:	48 83 c3 01          	add    rbx,0x1
    1bb6:	48 29 c2             	sub    rdx,rax
    1bb9:	48 c1 fa 05          	sar    rdx,0x5
    1bbd:	48 39 d3             	cmp    rbx,rdx
    1bc0:	0f 82 62 ff ff ff    	jb     1b28 <work_run+0xc8>
    1bc6:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
    1bcb:	31 db                	xor    ebx,ebx
    1bcd:	48 8d 6c 24 10       	lea    rbp,[rsp+0x10]
    1bd2:	48 3b 7c 24 18       	cmp    rdi,QWORD PTR [rsp+0x18]
    1bd7:	74 4e                	je     1c27 <work_run+0x1c7>
    1bd9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1be0:	48 8d 3c df          	lea    rdi,[rdi+rbx*8]
    1be4:	49 89 ee             	mov    r14,rbp
    1be7:	e8 00 00 00 00       	call   1bec <work_run+0x18c>
    1bec:	48 8b 54 24 18       	mov    rdx,QWORD PTR [rsp+0x18]
    1bf1:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
    1bf6:	48 83 c3 01          	add    rbx,0x1
    1bfa:	48 89 d0             	mov    rax,rdx
    1bfd:	48 29 f8             	sub    rax,rdi
    1c00:	48 c1 f8 03          	sar    rax,0x3
    1c04:	48 39 c3             	cmp    rbx,rax
    1c07:	72 d7                	jb     1be0 <work_run+0x180>
    1c09:	48 39 d7             	cmp    rdi,rdx
    1c0c:	74 19                	je     1c27 <work_run+0x1c7>
    1c0e:	48 89 f8             	mov    rax,rdi
    1c11:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1c18:	48 83 38 00          	cmp    QWORD PTR [rax],0x0
    1c1c:	75 64                	jne    1c82 <work_run+0x222>
    1c1e:	48 83 c0 08          	add    rax,0x8
    1c22:	48 39 c2             	cmp    rdx,rax
    1c25:	75 f1                	jne    1c18 <work_run+0x1b8>
    1c27:	48 85 ff             	test   rdi,rdi
    1c2a:	74 05                	je     1c31 <work_run+0x1d1>
    1c2c:	e8 00 00 00 00       	call   1c31 <work_run+0x1d1>
    1c31:	48 8b 44 24 28       	mov    rax,QWORD PTR [rsp+0x28]
    1c36:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
    1c3d:	00 00 
    1c3f:	75 46                	jne    1c87 <work_run+0x227>
    1c41:	48 83 c4 38          	add    rsp,0x38
    1c45:	5b                   	pop    rbx
    1c46:	5d                   	pop    rbp
    1c47:	41 5c                	pop    r12
    1c49:	41 5d                	pop    r13
    1c4b:	41 5e                	pop    r14
    1c4d:	41 5f                	pop    r15
    1c4f:	c3                   	ret
    1c50:	48 89 ef             	mov    rdi,rbp
    1c53:	e8 00 00 00 00       	call   1c58 <work_run+0x1f8>
    1c58:	48 8b 45 00          	mov    rax,QWORD PTR [rbp+0x0]
    1c5c:	be 0a 00 00 00       	mov    esi,0xa
    1c61:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 1c68 <work_run+0x208>
    1c68:	48 8b 40 30          	mov    rax,QWORD PTR [rax+0x30]
    1c6c:	48 39 d0             	cmp    rax,rdx
    1c6f:	0f 84 56 fe ff ff    	je     1acb <work_run+0x6b>
    1c75:	48 89 ef             	mov    rdi,rbp
    1c78:	ff d0                	call   rax
    1c7a:	0f be f0             	movsx  esi,al
    1c7d:	e9 49 fe ff ff       	jmp    1acb <work_run+0x6b>
    1c82:	e8 00 00 00 00       	call   1c87 <work_run+0x227>
    1c87:	e8 00 00 00 00       	call   1c8c <work_run+0x22c>
    1c8c:	e8 00 00 00 00       	call   1c91 <work_run+0x231>
    1c91:	f3 0f 1e fa          	endbr64
    1c95:	48 89 c5             	mov    rbp,rax
    1c98:	e9 00 00 00 00       	jmp    1c9d <work_run+0x23d>
    1c9d:	f3 0f 1e fa          	endbr64
    1ca1:	48 89 c5             	mov    rbp,rax
    1ca4:	e9 00 00 00 00       	jmp    1ca9 <work_run+0x249>
    1ca9:	f3 0f 1e fa          	endbr64
    1cad:	48 89 c5             	mov    rbp,rax
    1cb0:	e9 00 00 00 00       	jmp    1cb5 <work_run+0x255>

Disassembly of section .text._ZNKSt5ctypeIcE8do_widenEc:

0000000000000000 <_ZNKSt5ctypeIcE8do_widenEc>:
   0:	f3 0f 1e fa          	endbr64
   4:	89 f0                	mov    eax,esi
   6:	c3                   	ret

Disassembly of section .text._ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEE6_M_runEv:

0000000000000000 <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEE6_M_runEv>:
   0:	f3 0f 1e fa          	endbr64
   4:	44 8b 47 18          	mov    r8d,DWORD PTR [rdi+0x18]
   8:	0f b6 57 08          	movzx  edx,BYTE PTR [rdi+0x8]
   c:	48 8b 77 10          	mov    rsi,QWORD PTR [rdi+0x10]
  10:	48 8b 47 20          	mov    rax,QWORD PTR [rdi+0x20]
  14:	44 89 c7             	mov    edi,r8d
  17:	ff e0                	jmp    rax

Disassembly of section .text._ZNSt6vectorISt4pairIiiESaIS1_EED2Ev:

0000000000000000 <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 8b 3f             	mov    rdi,QWORD PTR [rdi]
   7:	48 85 ff             	test   rdi,rdi
   a:	74 0c                	je     18 <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev+0x18>
   c:	e9 00 00 00 00       	jmp    11 <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev+0x11>
  11:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  18:	c3                   	ret

Disassembly of section .text._ZNSt6vectorI11thread_infoSaIS0_EED2Ev:

0000000000000000 <_ZNSt6vectorI11thread_infoSaIS0_EED1Ev>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 8b 3f             	mov    rdi,QWORD PTR [rdi]
   7:	48 85 ff             	test   rdi,rdi
   a:	74 0c                	je     18 <_ZNSt6vectorI11thread_infoSaIS0_EED1Ev+0x18>
   c:	e9 00 00 00 00       	jmp    11 <_ZNSt6vectorI11thread_infoSaIS0_EED1Ev+0x11>
  11:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  18:	c3                   	ret

Disassembly of section .text._ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED2Ev:

0000000000000000 <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED1Ev>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # b <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED1Ev+0xb>
   b:	48 89 07             	mov    QWORD PTR [rdi],rax
   e:	e9 00 00 00 00       	jmp    13 <.LC3+0xb>

Disassembly of section .text._ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED0Ev:

0000000000000000 <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED0Ev>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # b <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED0Ev+0xb>
   b:	55                   	push   rbp
   c:	48 89 fd             	mov    rbp,rdi
   f:	48 89 07             	mov    QWORD PTR [rdi],rax
  12:	e8 00 00 00 00       	call   17 <_ZNSt6thread11_State_implINS_8_InvokerISt5tupleIJPFviPhbEiS3_bEEEEED0Ev+0x17>
  17:	48 89 ef             	mov    rdi,rbp
  1a:	5d                   	pop    rbp
  1b:	e9 00 00 00 00       	jmp    20 <ZEFFG33RH2U8HH2_5kk2L>

Disassembly of section .text._ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_:

0000000000000000 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_>:
   0:	f3 0f 1e fa          	endbr64
   4:	41 57                	push   r15
   6:	49 89 ff             	mov    r15,rdi
   9:	41 56                	push   r14
   b:	41 55                	push   r13
   d:	45 89 c5             	mov    r13d,r8d
  10:	41 54                	push   r12
  12:	49 89 cc             	mov    r12,rcx
  15:	55                   	push   rbp
  16:	48 89 d5             	mov    rbp,rdx
  19:	53                   	push   rbx
  1a:	48 83 ec 28          	sub    rsp,0x28
  1e:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
  23:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
  2a:	00 00 
  2c:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
  31:	31 c0                	xor    eax,eax
  33:	e8 00 00 00 00       	call   38 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0x38>
  38:	48 8d 74 24 10       	lea    rsi,[rsp+0x10]
  3d:	44 89 ea             	mov    edx,r13d
  40:	48 89 ef             	mov    rdi,rbp
  43:	44 8b 30             	mov    r14d,DWORD PTR [rax]
  46:	48 89 c3             	mov    rbx,rax
  49:	c7 00 00 00 00 00    	mov    DWORD PTR [rax],0x0
  4f:	41 ff d7             	call   r15
  52:	48 8b 54 24 10       	mov    rdx,QWORD PTR [rsp+0x10]
  57:	48 39 ea             	cmp    rdx,rbp
  5a:	74 5b                	je     b7 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xb7>
  5c:	8b 33                	mov    esi,DWORD PTR [rbx]
  5e:	83 fe 22             	cmp    esi,0x22
  61:	74 4a                	je     ad <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xad>
  63:	b9 00 00 00 80       	mov    ecx,0x80000000
  68:	bf ff ff ff ff       	mov    edi,0xffffffff
  6d:	48 01 c1             	add    rcx,rax
  70:	48 39 f9             	cmp    rcx,rdi
  73:	77 38                	ja     ad <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xad>
  75:	4d 85 e4             	test   r12,r12
  78:	74 07                	je     81 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0x81>
  7a:	48 29 ea             	sub    rdx,rbp
  7d:	49 89 14 24          	mov    QWORD PTR [r12],rdx
  81:	85 f6                	test   esi,esi
  83:	74 23                	je     a8 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xa8>
  85:	48 8b 5c 24 18       	mov    rbx,QWORD PTR [rsp+0x18]
  8a:	64 48 33 1c 25 28 00 	xor    rbx,QWORD PTR fs:0x28
  91:	00 00 
  93:	75 2c                	jne    c1 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xc1>
  95:	48 83 c4 28          	add    rsp,0x28
  99:	5b                   	pop    rbx
  9a:	5d                   	pop    rbp
  9b:	41 5c                	pop    r12
  9d:	41 5d                	pop    r13
  9f:	41 5e                	pop    r14
  a1:	41 5f                	pop    r15
  a3:	c3                   	ret
  a4:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
  a8:	44 89 33             	mov    DWORD PTR [rbx],r14d
  ab:	eb d8                	jmp    85 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0x85>
  ad:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  b2:	e8 00 00 00 00       	call   b7 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xb7>
  b7:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  bc:	e8 00 00 00 00       	call   c1 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xc1>
  c1:	e8 00 00 00 00       	call   c6 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xc6>
  c6:	f3 0f 1e fa          	endbr64
  ca:	48 89 c7             	mov    rdi,rax
  cd:	83 3b 00             	cmp    DWORD PTR [rbx],0x0
  d0:	75 03                	jne    d5 <_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_+0xd5>
  d2:	44 89 33             	mov    DWORD PTR [rbx],r14d
  d5:	e8 00 00 00 00       	call   da <.LC15+0x32>

Disassembly of section .text._ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z:

0000000000000000 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z>:
   0:	f3 0f 1e fa          	endbr64
   4:	55                   	push   rbp
   5:	49 89 f2             	mov    r10,rsi
   8:	48 89 d6             	mov    rsi,rdx
   b:	48 89 ca             	mov    rdx,rcx
   e:	48 89 e5             	mov    rbp,rsp
  11:	41 56                	push   r14
  13:	41 55                	push   r13
  15:	41 54                	push   r12
  17:	49 89 fc             	mov    r12,rdi
  1a:	48 81 ec e8 00 00 00 	sub    rsp,0xe8
  21:	4c 89 85 50 ff ff ff 	mov    QWORD PTR [rbp-0xb0],r8
  28:	4c 89 8d 58 ff ff ff 	mov    QWORD PTR [rbp-0xa8],r9
  2f:	84 c0                	test   al,al
  31:	74 26                	je     59 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x59>
  33:	0f 29 85 60 ff ff ff 	movaps XMMWORD PTR [rbp-0xa0],xmm0
  3a:	0f 29 8d 70 ff ff ff 	movaps XMMWORD PTR [rbp-0x90],xmm1
  41:	0f 29 55 80          	movaps XMMWORD PTR [rbp-0x80],xmm2
  45:	0f 29 5d 90          	movaps XMMWORD PTR [rbp-0x70],xmm3
  49:	0f 29 65 a0          	movaps XMMWORD PTR [rbp-0x60],xmm4
  4d:	0f 29 6d b0          	movaps XMMWORD PTR [rbp-0x50],xmm5
  51:	0f 29 75 c0          	movaps XMMWORD PTR [rbp-0x40],xmm6
  55:	0f 29 7d d0          	movaps XMMWORD PTR [rbp-0x30],xmm7
  59:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
  60:	00 00 
  62:	48 89 85 28 ff ff ff 	mov    QWORD PTR [rbp-0xd8],rax
  69:	31 c0                	xor    eax,eax
  6b:	48 8d 46 17          	lea    rax,[rsi+0x17]
  6f:	48 89 e7             	mov    rdi,rsp
  72:	48 89 c1             	mov    rcx,rax
  75:	48 25 00 f0 ff ff    	and    rax,0xfffffffffffff000
  7b:	48 29 c7             	sub    rdi,rax
  7e:	48 83 e1 f0          	and    rcx,0xfffffffffffffff0
  82:	48 89 f8             	mov    rax,rdi
  85:	48 39 c4             	cmp    rsp,rax
  88:	74 15                	je     9f <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x9f>
  8a:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  91:	48 83 8c 24 f8 0f 00 	or     QWORD PTR [rsp+0xff8],0x0
  98:	00 00 
  9a:	48 39 c4             	cmp    rsp,rax
  9d:	75 eb                	jne    8a <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x8a>
  9f:	81 e1 ff 0f 00 00    	and    ecx,0xfff
  a5:	48 29 cc             	sub    rsp,rcx
  a8:	48 85 c9             	test   rcx,rcx
  ab:	0f 85 ef 00 00 00    	jne    1a0 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x1a0>
  b1:	48 8d 45 10          	lea    rax,[rbp+0x10]
  b5:	4c 8d 74 24 0f       	lea    r14,[rsp+0xf]
  ba:	c7 85 10 ff ff ff 20 	mov    DWORD PTR [rbp-0xf0],0x20
  c1:	00 00 00 
  c4:	48 89 85 18 ff ff ff 	mov    QWORD PTR [rbp-0xe8],rax
  cb:	49 83 e6 f0          	and    r14,0xfffffffffffffff0
  cf:	48 8d 85 30 ff ff ff 	lea    rax,[rbp-0xd0]
  d6:	48 8d 8d 10 ff ff ff 	lea    rcx,[rbp-0xf0]
  dd:	4c 89 f7             	mov    rdi,r14
  e0:	48 89 85 20 ff ff ff 	mov    QWORD PTR [rbp-0xe0],rax
  e7:	c7 85 14 ff ff ff 30 	mov    DWORD PTR [rbp-0xec],0x30
  ee:	00 00 00 
  f1:	41 ff d2             	call   r10
  f4:	49 8d 7c 24 10       	lea    rdi,[r12+0x10]
  f9:	4c 63 e8             	movsxd r13,eax
  fc:	49 89 3c 24          	mov    QWORD PTR [r12],rdi
 100:	4c 89 ad 08 ff ff ff 	mov    QWORD PTR [rbp-0xf8],r13
 107:	49 83 fd 0f          	cmp    r13,0xf
 10b:	77 53                	ja     160 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x160>
 10d:	49 83 fd 01          	cmp    r13,0x1
 111:	75 3d                	jne    150 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x150>
 113:	41 0f b6 06          	movzx  eax,BYTE PTR [r14]
 117:	41 88 44 24 10       	mov    BYTE PTR [r12+0x10],al
 11c:	4d 89 6c 24 08       	mov    QWORD PTR [r12+0x8],r13
 121:	42 c6 04 2f 00       	mov    BYTE PTR [rdi+r13*1],0x0
 126:	48 8b 85 28 ff ff ff 	mov    rax,QWORD PTR [rbp-0xd8]
 12d:	64 48 33 04 25 28 00 	xor    rax,QWORD PTR fs:0x28
 134:	00 00 
 136:	75 73                	jne    1ab <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x1ab>
 138:	48 8d 65 e8          	lea    rsp,[rbp-0x18]
 13c:	4c 89 e0             	mov    rax,r12
 13f:	41 5c                	pop    r12
 141:	41 5d                	pop    r13
 143:	41 5e                	pop    r14
 145:	5d                   	pop    rbp
 146:	c3                   	ret
 147:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
 14e:	00 00 
 150:	4d 85 ed             	test   r13,r13
 153:	74 c7                	je     11c <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x11c>
 155:	eb 2d                	jmp    184 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x184>
 157:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
 15e:	00 00 
 160:	4c 89 e7             	mov    rdi,r12
 163:	48 8d b5 08 ff ff ff 	lea    rsi,[rbp-0xf8]
 16a:	31 d2                	xor    edx,edx
 16c:	e8 00 00 00 00       	call   171 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x171>
 171:	49 89 04 24          	mov    QWORD PTR [r12],rax
 175:	48 89 c7             	mov    rdi,rax
 178:	48 8b 85 08 ff ff ff 	mov    rax,QWORD PTR [rbp-0xf8]
 17f:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
 184:	4c 89 ea             	mov    rdx,r13
 187:	4c 89 f6             	mov    rsi,r14
 18a:	e8 00 00 00 00       	call   18f <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x18f>
 18f:	4c 8b ad 08 ff ff ff 	mov    r13,QWORD PTR [rbp-0xf8]
 196:	49 8b 3c 24          	mov    rdi,QWORD PTR [r12]
 19a:	eb 80                	jmp    11c <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0x11c>
 19c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 1a0:	48 83 4c 0c f8 00    	or     QWORD PTR [rsp+rcx*1-0x8],0x0
 1a6:	e9 06 ff ff ff       	jmp    b1 <_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_mPKS8_P13__va_list_tagEmSB_z+0xb1>
 1ab:	e8 00 00 00 00       	call   1b0 <work_init.cold+0xa>

Disassembly of section .text._ZNSt6vectorISt6threadSaIS0_EED2Ev:

0000000000000000 <_ZNSt6vectorISt6threadSaIS0_EED1Ev>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 8b 57 08          	mov    rdx,QWORD PTR [rdi+0x8]
   8:	48 8b 3f             	mov    rdi,QWORD PTR [rdi]
   b:	48 39 fa             	cmp    rdx,rdi
   e:	74 17                	je     27 <_ZNSt6vectorISt6threadSaIS0_EED1Ev+0x27>
  10:	48 89 f8             	mov    rax,rdi
  13:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  18:	48 83 38 00          	cmp    QWORD PTR [rax],0x0
  1c:	75 1b                	jne    39 <_ZNSt6vectorISt6threadSaIS0_EED1Ev+0x39>
  1e:	48 83 c0 08          	add    rax,0x8
  22:	48 39 c2             	cmp    rdx,rax
  25:	75 f1                	jne    18 <_ZNSt6vectorISt6threadSaIS0_EED1Ev+0x18>
  27:	48 85 ff             	test   rdi,rdi
  2a:	74 0c                	je     38 <_ZNSt6vectorISt6threadSaIS0_EED1Ev+0x38>
  2c:	e9 00 00 00 00       	jmp    31 <_ZNSt6vectorISt6threadSaIS0_EED1Ev+0x31>
  31:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  38:	c3                   	ret
  39:	48 83 ec 08          	sub    rsp,0x8
  3d:	e8 00 00 00 00       	call   42 <_ZStL8__ioinit+0xa>

Disassembly of section .text.unlikely:

0000000000000000 <_Z15FHHT88g2_5k0kffi.cold>:
   0:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
   7:	00 
   8:	48 3b 7c 24 48       	cmp    rdi,QWORD PTR [rsp+0x48]
   d:	74 05                	je     14 <_Z15FHHT88g2_5k0kffi.cold+0x14>
   f:	e8 00 00 00 00       	call   14 <_Z15FHHT88g2_5k0kffi.cold+0x14>
  14:	48 8b bc 24 a0 00 00 	mov    rdi,QWORD PTR [rsp+0xa0]
  1b:	00 
  1c:	48 3b 7c 24 10       	cmp    rdi,QWORD PTR [rsp+0x10]
  21:	74 05                	je     28 <_Z15FHHT88g2_5k0kffi.cold+0x28>
  23:	e8 00 00 00 00       	call   28 <_Z15FHHT88g2_5k0kffi.cold+0x28>
  28:	4c 89 ef             	mov    rdi,r13
  2b:	e8 00 00 00 00       	call   30 <_Z15FHHT88g2_5k0kffi.cold+0x30>
  30:	48 8b bc 24 80 00 00 	mov    rdi,QWORD PTR [rsp+0x80]
  37:	00 
  38:	48 3b 7c 24 40       	cmp    rdi,QWORD PTR [rsp+0x40]
  3d:	75 21                	jne    60 <_Z15FHHT88g2_5k0kffi.cold+0x60>
  3f:	4c 89 e7             	mov    rdi,r12
  42:	e8 00 00 00 00       	call   47 <_Z15FHHT88g2_5k0kffi.cold+0x47>
  47:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
  4c:	48 3b 7c 24 08       	cmp    rdi,QWORD PTR [rsp+0x8]
  51:	74 05                	je     58 <_Z15FHHT88g2_5k0kffi.cold+0x58>
  53:	e8 00 00 00 00       	call   58 <_Z15FHHT88g2_5k0kffi.cold+0x58>
  58:	48 89 ef             	mov    rdi,rbp
  5b:	e8 00 00 00 00       	call   60 <_Z15FHHT88g2_5k0kffi.cold+0x60>
  60:	e8 00 00 00 00       	call   65 <_Z15FHHT88g2_5k0kffi.cold+0x65>
  65:	eb d8                	jmp    3f <_Z15FHHT88g2_5k0kffi.cold+0x3f>
  67:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 6e <_Z15FHHT88g2_5k0kffi.cold+0x6e>
  6e:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
  75:	00 
  76:	48 8b bc 24 38 01 00 	mov    rdi,QWORD PTR [rsp+0x138]
  7d:	00 
  7e:	48 3b 7c 24 28       	cmp    rdi,QWORD PTR [rsp+0x28]
  83:	74 05                	je     8a <_Z15FHHT88g2_5k0kffi.cold+0x8a>
  85:	e8 00 00 00 00       	call   8a <_Z15FHHT88g2_5k0kffi.cold+0x8a>
  8a:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
  8e:	48 8b 7c 24 38       	mov    rdi,QWORD PTR [rsp+0x38]
  93:	48 89 dd             	mov    rbp,rbx
  96:	48 89 84 24 f0 00 00 	mov    QWORD PTR [rsp+0xf0],rax
  9d:	00 
  9e:	e8 00 00 00 00       	call   a3 <_Z15FHHT88g2_5k0kffi.cold+0xa3>
  a3:	48 8b 05 00 00 00 00 	mov    rax,QWORD PTR [rip+0x0]        # aa <_Z15FHHT88g2_5k0kffi.cold+0xaa>
  aa:	48 8b 35 00 00 00 00 	mov    rsi,QWORD PTR [rip+0x0]        # b1 <_Z15FHHT88g2_5k0kffi.cold+0xb1>
  b1:	48 89 84 24 e0 00 00 	mov    QWORD PTR [rsp+0xe0],rax
  b8:	00 
  b9:	48 8b 40 e8          	mov    rax,QWORD PTR [rax-0x18]
  bd:	48 89 b4 04 e0 00 00 	mov    QWORD PTR [rsp+rax*1+0xe0],rsi
  c4:	00 
  c5:	48 c7 84 24 e8 00 00 	mov    QWORD PTR [rsp+0xe8],0x0
  cc:	00 00 00 00 00 
  d1:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
  d6:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # dd <_Z15FHHT88g2_5k0kffi.cold+0xdd>
  dd:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  e4:	00 
  e5:	e8 00 00 00 00       	call   ea <_Z15FHHT88g2_5k0kffi.cold+0xea>
  ea:	e9 41 ff ff ff       	jmp    30 <_Z15FHHT88g2_5k0kffi.cold+0x30>
  ef:	48 8b bc 24 60 02 00 	mov    rdi,QWORD PTR [rsp+0x260]
  f6:	00 
  f7:	48 39 ef             	cmp    rdi,rbp
  fa:	74 05                	je     101 <_Z15FHHT88g2_5k0kffi.cold+0x101>
  fc:	e8 00 00 00 00       	call   101 <_Z15FHHT88g2_5k0kffi.cold+0x101>
 101:	48 89 dd             	mov    rbp,rbx
 104:	48 8b bc 24 e0 00 00 	mov    rdi,QWORD PTR [rsp+0xe0]
 10b:	00 
 10c:	48 8d 84 24 f0 00 00 	lea    rax,[rsp+0xf0]
 113:	00 
 114:	48 39 c7             	cmp    rdi,rax
 117:	74 05                	je     11e <_Z15FHHT88g2_5k0kffi.cold+0x11e>
 119:	e8 00 00 00 00       	call   11e <_Z15FHHT88g2_5k0kffi.cold+0x11e>
 11e:	48 89 ef             	mov    rdi,rbp
 121:	e8 00 00 00 00       	call   126 <_Z15FHHT88g2_5k0kffi.cold+0x126>
 126:	48 89 ef             	mov    rdi,rbp
 129:	4c 89 e5             	mov    rbp,r12
 12c:	e8 00 00 00 00       	call   131 <_Z15FHHT88g2_5k0kffi.cold+0x131>
 131:	48 8b 43 e8          	mov    rax,QWORD PTR [rbx-0x18]
 135:	48 89 9c 24 60 02 00 	mov    QWORD PTR [rsp+0x260],rbx
 13c:	00 
 13d:	48 8b 1d 00 00 00 00 	mov    rbx,QWORD PTR [rip+0x0]        # 144 <_Z15FHHT88g2_5k0kffi.cold+0x144>
 144:	48 89 9c 04 60 02 00 	mov    QWORD PTR [rsp+rax*1+0x260],rbx
 14b:	00 
 14c:	48 c7 84 24 68 02 00 	mov    QWORD PTR [rsp+0x268],0x0
 153:	00 00 00 00 00 
 158:	48 8d 05 00 00 00 00 	lea    rax,[rip+0x0]        # 15f <_Z15FHHT88g2_5k0kffi.cold+0x15f>
 15f:	4c 89 ff             	mov    rdi,r15
 162:	48 89 84 24 60 03 00 	mov    QWORD PTR [rsp+0x360],rax
 169:	00 
 16a:	e8 00 00 00 00       	call   16f <_Z15FHHT88g2_5k0kffi.cold+0x16f>
 16f:	e9 d3 fe ff ff       	jmp    47 <_Z15FHHT88g2_5k0kffi.cold+0x47>
 174:	e8 00 00 00 00       	call   179 <_Z15FHHT88g2_5k0kffi.cold+0x179>
 179:	e8 00 00 00 00       	call   17e <_Z15FHHT88g2_5k0kffi.cold+0x17e>
 17e:	e9 00 00 00 00       	jmp    183 <_Z16LFJIDR_233_DDLKRv.cold>

0000000000000183 <_Z16LFJIDR_233_DDLKRv.cold>:
 183:	48 8b 74 24 20       	mov    rsi,QWORD PTR [rsp+0x20]
 188:	4c 89 ff             	mov    rdi,r15
 18b:	e8 00 00 00 00       	call   190 <_Z16LFJIDR_233_DDLKRv.cold+0xd>
 190:	49 8b 7d 00          	mov    rdi,QWORD PTR [r13+0x0]
 194:	48 85 ff             	test   rdi,rdi
 197:	74 05                	je     19e <_Z16LFJIDR_233_DDLKRv.cold+0x1b>
 199:	e8 00 00 00 00       	call   19e <_Z16LFJIDR_233_DDLKRv.cold+0x1b>
 19e:	48 89 ef             	mov    rdi,rbp
 1a1:	e8 00 00 00 00       	call   1a6 <work_init.cold>

00000000000001a6 <work_init.cold>:
 1a6:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
 1aa:	48 85 ff             	test   rdi,rdi
 1ad:	74 05                	je     1b4 <work_init.cold+0xe>
 1af:	e8 00 00 00 00       	call   1b4 <work_init.cold+0xe>
 1b4:	48 89 ef             	mov    rdi,rbp
 1b7:	e8 00 00 00 00       	call   1bc <work_start_monitoring.cold>

00000000000001bc <work_start_monitoring.cold>:
 1bc:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
 1c1:	48 85 ff             	test   rdi,rdi
 1c4:	74 06                	je     1cc <work_start_monitoring.cold+0x10>
 1c6:	48 8b 07             	mov    rax,QWORD PTR [rdi]
 1c9:	ff 50 08             	call   QWORD PTR [rax+0x8]
 1cc:	4c 89 f7             	mov    rdi,r14
 1cf:	e8 00 00 00 00       	call   1d4 <work_start_monitoring.cold+0x18>
 1d4:	48 89 ef             	mov    rdi,rbp
 1d7:	e8 00 00 00 00       	call   1dc <work_start_monitoring.cold+0x20>
 1dc:	48 83 3c 24 00       	cmp    QWORD PTR [rsp],0x0
 1e1:	74 e9                	je     1cc <work_start_monitoring.cold+0x10>
 1e3:	e9 00 00 00 00       	jmp    1e8 <work_run.cold>

00000000000001e8 <work_run.cold>:
 1e8:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
 1ed:	48 85 ff             	test   rdi,rdi
 1f0:	74 06                	je     1f8 <work_run.cold+0x10>
 1f2:	48 8b 07             	mov    rax,QWORD PTR [rdi]
 1f5:	ff 50 08             	call   QWORD PTR [rax+0x8]
 1f8:	4c 89 f7             	mov    rdi,r14
 1fb:	e8 00 00 00 00       	call   200 <work_run.cold+0x18>
 200:	48 89 ef             	mov    rdi,rbp
 203:	e8 00 00 00 00       	call   208 <work_run.cold+0x20>
 208:	48 83 3c 24 00       	cmp    QWORD PTR [rsp],0x0
 20d:	74 e9                	je     1f8 <work_run.cold+0x10>
 20f:	e9 00 00 00 00       	jmp    214 <work_run.cold+0x2c>

Disassembly of section .text._ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE:

0000000000000000 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 85 f6             	test   rsi,rsi
   7:	74 37                	je     40 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE+0x40>
   9:	55                   	push   rbp
   a:	48 89 fd             	mov    rbp,rdi
   d:	53                   	push   rbx
   e:	48 89 f3             	mov    rbx,rsi
  11:	48 83 ec 08          	sub    rsp,0x8
  15:	48 8b 73 18          	mov    rsi,QWORD PTR [rbx+0x18]
  19:	48 89 ef             	mov    rdi,rbp
  1c:	e8 00 00 00 00       	call   21 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE+0x21>
  21:	48 89 df             	mov    rdi,rbx
  24:	48 8b 5b 10          	mov    rbx,QWORD PTR [rbx+0x10]
  28:	e8 00 00 00 00       	call   2d <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE+0x2d>
  2d:	48 85 db             	test   rbx,rbx
  30:	75 e3                	jne    15 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE+0x15>
  32:	48 83 c4 08          	add    rsp,0x8
  36:	5b                   	pop    rbx
  37:	5d                   	pop    rbp
  38:	c3                   	ret
  39:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  40:	c3                   	ret

Disassembly of section .text._ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_:

0000000000000000 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_>:
   0:	f3 0f 1e fa          	endbr64
   4:	41 57                	push   r15
   6:	41 56                	push   r14
   8:	4c 8d 77 08          	lea    r14,[rdi+0x8]
   c:	41 55                	push   r13
   e:	49 89 f5             	mov    r13,rsi
  11:	41 54                	push   r12
  13:	55                   	push   rbp
  14:	53                   	push   rbx
  15:	48 89 fb             	mov    rbx,rdi
  18:	48 83 ec 08          	sub    rsp,0x8
  1c:	4c 8b 67 10          	mov    r12,QWORD PTR [rdi+0x10]
  20:	4d 85 e4             	test   r12,r12
  23:	0f 84 cf 00 00 00    	je     f8 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xf8>
  29:	8b 2e                	mov    ebp,DWORD PTR [rsi]
  2b:	eb 15                	jmp    42 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x42>
  2d:	0f 1f 00             	nop    DWORD PTR [rax]
  30:	49 8b 44 24 10       	mov    rax,QWORD PTR [r12+0x10]
  35:	ba 01 00 00 00       	mov    edx,0x1
  3a:	48 85 c0             	test   rax,rax
  3d:	74 18                	je     57 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x57>
  3f:	49 89 c4             	mov    r12,rax
  42:	41 8b 4c 24 20       	mov    ecx,DWORD PTR [r12+0x20]
  47:	39 cd                	cmp    ebp,ecx
  49:	7c e5                	jl     30 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x30>
  4b:	49 8b 44 24 18       	mov    rax,QWORD PTR [r12+0x18]
  50:	31 d2                	xor    edx,edx
  52:	48 85 c0             	test   rax,rax
  55:	75 e8                	jne    3f <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x3f>
  57:	84 d2                	test   dl,dl
  59:	75 55                	jne    b0 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xb0>
  5b:	39 cd                	cmp    ebp,ecx
  5d:	7e 67                	jle    c6 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xc6>
  5f:	41 bf 01 00 00 00    	mov    r15d,0x1
  65:	4d 39 e6             	cmp    r14,r12
  68:	75 76                	jne    e0 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xe0>
  6a:	bf 28 00 00 00       	mov    edi,0x28
  6f:	e8 00 00 00 00       	call   74 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x74>
  74:	4c 89 e2             	mov    rdx,r12
  77:	4c 89 f1             	mov    rcx,r14
  7a:	44 89 ff             	mov    edi,r15d
  7d:	48 89 c5             	mov    rbp,rax
  80:	41 8b 45 00          	mov    eax,DWORD PTR [r13+0x0]
  84:	48 89 ee             	mov    rsi,rbp
  87:	89 45 20             	mov    DWORD PTR [rbp+0x20],eax
  8a:	e8 00 00 00 00       	call   8f <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x8f>
  8f:	48 83 43 28 01       	add    QWORD PTR [rbx+0x28],0x1
  94:	48 83 c4 08          	add    rsp,0x8
  98:	48 89 e8             	mov    rax,rbp
  9b:	5b                   	pop    rbx
  9c:	ba 01 00 00 00       	mov    edx,0x1
  a1:	5d                   	pop    rbp
  a2:	41 5c                	pop    r12
  a4:	41 5d                	pop    r13
  a6:	41 5e                	pop    r14
  a8:	41 5f                	pop    r15
  aa:	c3                   	ret
  ab:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  b0:	4c 3b 63 18          	cmp    r12,QWORD PTR [rbx+0x18]
  b4:	74 a9                	je     5f <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x5f>
  b6:	4c 89 e7             	mov    rdi,r12
  b9:	e8 00 00 00 00       	call   be <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xbe>
  be:	3b 68 20             	cmp    ebp,DWORD PTR [rax+0x20]
  c1:	7f 9c                	jg     5f <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x5f>
  c3:	49 89 c4             	mov    r12,rax
  c6:	48 83 c4 08          	add    rsp,0x8
  ca:	4c 89 e0             	mov    rax,r12
  cd:	31 d2                	xor    edx,edx
  cf:	5b                   	pop    rbx
  d0:	5d                   	pop    rbp
  d1:	41 5c                	pop    r12
  d3:	41 5d                	pop    r13
  d5:	41 5e                	pop    r14
  d7:	41 5f                	pop    r15
  d9:	c3                   	ret
  da:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
  e0:	45 31 ff             	xor    r15d,r15d
  e3:	41 3b 6c 24 20       	cmp    ebp,DWORD PTR [r12+0x20]
  e8:	41 0f 9c c7          	setl   r15b
  ec:	e9 79 ff ff ff       	jmp    6a <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x6a>
  f1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  f8:	4d 89 f4             	mov    r12,r14
  fb:	4c 3b 77 18          	cmp    r14,QWORD PTR [rdi+0x18]
  ff:	74 07                	je     108 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x108>
 101:	8b 2e                	mov    ebp,DWORD PTR [rsi]
 103:	eb b1                	jmp    b6 <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0xb6>
 105:	0f 1f 00             	nop    DWORD PTR [rax]
 108:	41 bf 01 00 00 00    	mov    r15d,0x1
 10e:	e9 57 ff ff ff       	jmp    6a <_ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_+0x6a>

Disassembly of section .text._ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_:

0000000000000000 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>:
   0:	f3 0f 1e fa          	endbr64
   4:	41 57                	push   r15
   6:	41 56                	push   r14
   8:	41 55                	push   r13
   a:	41 54                	push   r12
   c:	55                   	push   rbp
   d:	53                   	push   rbx
   e:	48 89 f3             	mov    rbx,rsi
  11:	48 be ff ff ff ff ff 	movabs rsi,0x3ffffffffffffff
  18:	ff ff 03 
  1b:	48 83 ec 18          	sub    rsp,0x18
  1f:	48 8b 6f 08          	mov    rbp,QWORD PTR [rdi+0x8]
  23:	4c 8b 37             	mov    r14,QWORD PTR [rdi]
  26:	48 89 e8             	mov    rax,rbp
  29:	4c 29 f0             	sub    rax,r14
  2c:	48 c1 f8 05          	sar    rax,0x5
  30:	48 39 f0             	cmp    rax,rsi
  33:	0f 84 3d 01 00 00    	je     176 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x176>
  39:	48 89 d9             	mov    rcx,rbx
  3c:	49 89 fd             	mov    r13,rdi
  3f:	4c 29 f1             	sub    rcx,r14
  42:	48 85 c0             	test   rax,rax
  45:	0f 84 0d 01 00 00    	je     158 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x158>
  4b:	49 bf e0 ff ff ff ff 	movabs r15,0x7fffffffffffffe0
  52:	ff ff 7f 
  55:	48 8d 3c 00          	lea    rdi,[rax+rax*1]
  59:	48 39 f8             	cmp    rax,rdi
  5c:	0f 86 de 00 00 00    	jbe    140 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x140>
  62:	4c 89 ff             	mov    rdi,r15
  65:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
  6a:	48 89 0c 24          	mov    QWORD PTR [rsp],rcx
  6e:	e8 00 00 00 00       	call   73 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x73>
  73:	48 8b 0c 24          	mov    rcx,QWORD PTR [rsp]
  77:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
  7c:	49 89 c4             	mov    r12,rax
  7f:	4a 8d 04 38          	lea    rax,[rax+r15*1]
  83:	4d 8d 7c 24 20       	lea    r15,[r12+0x20]
  88:	f3 0f 6f 22          	movdqu xmm4,XMMWORD PTR [rdx]
  8c:	f3 0f 6f 6a 10       	movdqu xmm5,XMMWORD PTR [rdx+0x10]
  91:	41 0f 11 24 0c       	movups XMMWORD PTR [r12+rcx*1],xmm4
  96:	41 0f 11 6c 0c 10    	movups XMMWORD PTR [r12+rcx*1+0x10],xmm5
  9c:	4c 39 f3             	cmp    rbx,r14
  9f:	74 38                	je     d9 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xd9>
  a1:	4c 89 e1             	mov    rcx,r12
  a4:	4c 89 f2             	mov    rdx,r14
  a7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
  ae:	00 00 
  b0:	f3 0f 6f 02          	movdqu xmm0,XMMWORD PTR [rdx]
  b4:	48 83 c2 20          	add    rdx,0x20
  b8:	48 83 c1 20          	add    rcx,0x20
  bc:	0f 11 41 e0          	movups XMMWORD PTR [rcx-0x20],xmm0
  c0:	f3 0f 6f 4a f0       	movdqu xmm1,XMMWORD PTR [rdx-0x10]
  c5:	0f 11 49 f0          	movups XMMWORD PTR [rcx-0x10],xmm1
  c9:	48 39 d3             	cmp    rbx,rdx
  cc:	75 e2                	jne    b0 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xb0>
  ce:	48 89 da             	mov    rdx,rbx
  d1:	4c 29 f2             	sub    rdx,r14
  d4:	4d 8d 7c 14 20       	lea    r15,[r12+rdx*1+0x20]
  d9:	48 39 eb             	cmp    rbx,rbp
  dc:	74 2e                	je     10c <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x10c>
  de:	48 89 da             	mov    rdx,rbx
  e1:	4c 89 f9             	mov    rcx,r15
  e4:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
  e8:	f3 0f 6f 12          	movdqu xmm2,XMMWORD PTR [rdx]
  ec:	f3 0f 6f 5a 10       	movdqu xmm3,XMMWORD PTR [rdx+0x10]
  f1:	48 83 c2 20          	add    rdx,0x20
  f5:	48 83 c1 20          	add    rcx,0x20
  f9:	0f 11 51 e0          	movups XMMWORD PTR [rcx-0x20],xmm2
  fd:	0f 11 59 f0          	movups XMMWORD PTR [rcx-0x10],xmm3
 101:	48 39 ea             	cmp    rdx,rbp
 104:	75 e2                	jne    e8 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xe8>
 106:	48 29 da             	sub    rdx,rbx
 109:	49 01 d7             	add    r15,rdx
 10c:	4d 85 f6             	test   r14,r14
 10f:	74 10                	je     121 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x121>
 111:	4c 89 f7             	mov    rdi,r14
 114:	48 89 04 24          	mov    QWORD PTR [rsp],rax
 118:	e8 00 00 00 00       	call   11d <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x11d>
 11d:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
 121:	4d 89 65 00          	mov    QWORD PTR [r13+0x0],r12
 125:	4d 89 7d 08          	mov    QWORD PTR [r13+0x8],r15
 129:	49 89 45 10          	mov    QWORD PTR [r13+0x10],rax
 12d:	48 83 c4 18          	add    rsp,0x18
 131:	5b                   	pop    rbx
 132:	5d                   	pop    rbp
 133:	41 5c                	pop    r12
 135:	41 5d                	pop    r13
 137:	41 5e                	pop    r14
 139:	41 5f                	pop    r15
 13b:	c3                   	ret
 13c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 140:	48 85 ff             	test   rdi,rdi
 143:	75 1e                	jne    163 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x163>
 145:	41 bf 20 00 00 00    	mov    r15d,0x20
 14b:	31 c0                	xor    eax,eax
 14d:	45 31 e4             	xor    r12d,r12d
 150:	e9 33 ff ff ff       	jmp    88 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x88>
 155:	0f 1f 00             	nop    DWORD PTR [rax]
 158:	41 bf 20 00 00 00    	mov    r15d,0x20
 15e:	e9 ff fe ff ff       	jmp    62 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x62>
 163:	48 39 f7             	cmp    rdi,rsi
 166:	48 0f 46 f7          	cmovbe rsi,rdi
 16a:	48 c1 e6 05          	shl    rsi,0x5
 16e:	49 89 f7             	mov    r15,rsi
 171:	e9 ec fe ff ff       	jmp    62 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x62>
 176:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 17d <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_realloc_insertIJRKS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x17d>
 17d:	e8 00 00 00 00       	call   182 <.LC19+0x7a>

Disassembly of section .text._ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm:

0000000000000000 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 85 f6             	test   rsi,rsi
   7:	0f 84 93 00 00 00    	je     a0 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0xa0>
   d:	48 ba ff ff ff ff ff 	movabs rdx,0x3ffffffffffffff
  14:	ff ff 03 
  17:	41 57                	push   r15
  19:	41 56                	push   r14
  1b:	41 55                	push   r13
  1d:	41 54                	push   r12
  1f:	49 89 fc             	mov    r12,rdi
  22:	55                   	push   rbp
  23:	48 89 f5             	mov    rbp,rsi
  26:	48 89 d6             	mov    rsi,rdx
  29:	53                   	push   rbx
  2a:	48 83 ec 08          	sub    rsp,0x8
  2e:	48 8b 4f 08          	mov    rcx,QWORD PTR [rdi+0x8]
  32:	48 8b 47 10          	mov    rax,QWORD PTR [rdi+0x10]
  36:	48 89 cb             	mov    rbx,rcx
  39:	48 2b 1f             	sub    rbx,QWORD PTR [rdi]
  3c:	48 29 c8             	sub    rax,rcx
  3f:	49 89 dd             	mov    r13,rbx
  42:	48 c1 f8 05          	sar    rax,0x5
  46:	49 c1 fd 05          	sar    r13,0x5
  4a:	4c 29 ee             	sub    rsi,r13
  4d:	48 39 c5             	cmp    rbp,rax
  50:	77 56                	ja     a8 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0xa8>
  52:	48 89 c8             	mov    rax,rcx
  55:	48 89 ea             	mov    rdx,rbp
  58:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  5f:	00 
  60:	48 c7 00 00 00 00 00 	mov    QWORD PTR [rax],0x0
  67:	48 83 c0 20          	add    rax,0x20
  6b:	48 c7 40 f0 00 00 00 	mov    QWORD PTR [rax-0x10],0x0
  72:	00 
  73:	c6 40 f8 00          	mov    BYTE PTR [rax-0x8],0x0
  77:	c7 40 e8 ff ff ff ff 	mov    DWORD PTR [rax-0x18],0xffffffff
  7e:	48 83 ea 01          	sub    rdx,0x1
  82:	75 dc                	jne    60 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x60>
  84:	48 c1 e5 05          	shl    rbp,0x5
  88:	48 01 e9             	add    rcx,rbp
  8b:	49 89 4c 24 08       	mov    QWORD PTR [r12+0x8],rcx
  90:	48 83 c4 08          	add    rsp,0x8
  94:	5b                   	pop    rbx
  95:	5d                   	pop    rbp
  96:	41 5c                	pop    r12
  98:	41 5d                	pop    r13
  9a:	41 5e                	pop    r14
  9c:	41 5f                	pop    r15
  9e:	c3                   	ret
  9f:	90                   	nop
  a0:	c3                   	ret
  a1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  a8:	48 39 ee             	cmp    rsi,rbp
  ab:	0f 82 c2 00 00 00    	jb     173 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x173>
  b1:	4c 39 ed             	cmp    rbp,r13
  b4:	4d 89 ee             	mov    r14,r13
  b7:	4c 0f 43 f5          	cmovae r14,rbp
  bb:	4d 01 ee             	add    r14,r13
  be:	49 39 d6             	cmp    r14,rdx
  c1:	4c 0f 47 f2          	cmova  r14,rdx
  c5:	49 c1 e6 05          	shl    r14,0x5
  c9:	4c 89 f7             	mov    rdi,r14
  cc:	e8 00 00 00 00       	call   d1 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0xd1>
  d1:	48 89 e9             	mov    rcx,rbp
  d4:	49 89 c7             	mov    r15,rax
  d7:	48 8d 14 18          	lea    rdx,[rax+rbx*1]
  db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]
  e0:	48 c7 02 00 00 00 00 	mov    QWORD PTR [rdx],0x0
  e7:	48 83 c2 20          	add    rdx,0x20
  eb:	48 c7 42 f0 00 00 00 	mov    QWORD PTR [rdx-0x10],0x0
  f2:	00 
  f3:	c6 42 f8 00          	mov    BYTE PTR [rdx-0x8],0x0
  f7:	c7 42 e8 ff ff ff ff 	mov    DWORD PTR [rdx-0x18],0xffffffff
  fe:	48 83 e9 01          	sub    rcx,0x1
 102:	75 dc                	jne    e0 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0xe0>
 104:	49 8b 3c 24          	mov    rdi,QWORD PTR [r12]
 108:	49 8b 74 24 08       	mov    rsi,QWORD PTR [r12+0x8]
 10d:	4c 89 f9             	mov    rcx,r15
 110:	48 89 fa             	mov    rdx,rdi
 113:	48 39 fe             	cmp    rsi,rdi
 116:	74 26                	je     13e <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x13e>
 118:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
 11f:	00 
 120:	f3 0f 6f 02          	movdqu xmm0,XMMWORD PTR [rdx]
 124:	48 83 c2 20          	add    rdx,0x20
 128:	48 83 c1 20          	add    rcx,0x20
 12c:	0f 11 41 e0          	movups XMMWORD PTR [rcx-0x20],xmm0
 130:	f3 0f 6f 4a f0       	movdqu xmm1,XMMWORD PTR [rdx-0x10]
 135:	0f 11 49 f0          	movups XMMWORD PTR [rcx-0x10],xmm1
 139:	48 39 d6             	cmp    rsi,rdx
 13c:	75 e2                	jne    120 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x120>
 13e:	48 85 ff             	test   rdi,rdi
 141:	74 05                	je     148 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x148>
 143:	e8 00 00 00 00       	call   148 <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x148>
 148:	4c 01 ed             	add    rbp,r13
 14b:	4d 01 fe             	add    r14,r15
 14e:	4d 89 3c 24          	mov    QWORD PTR [r12],r15
 152:	48 c1 e5 05          	shl    rbp,0x5
 156:	4d 89 74 24 10       	mov    QWORD PTR [r12+0x10],r14
 15b:	49 8d 14 2f          	lea    rdx,[r15+rbp*1]
 15f:	49 89 54 24 08       	mov    QWORD PTR [r12+0x8],rdx
 164:	48 83 c4 08          	add    rsp,0x8
 168:	5b                   	pop    rbx
 169:	5d                   	pop    rbp
 16a:	41 5c                	pop    r12
 16c:	41 5d                	pop    r13
 16e:	41 5e                	pop    r14
 170:	41 5f                	pop    r15
 172:	c3                   	ret
 173:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 17a <_ZNSt6vectorI11thread_infoSaIS0_EE17_M_default_appendEm+0x17a>
 17a:	e8 00 00 00 00       	call   17f <.LC19+0x77>

Disassembly of section .text._ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_:

0000000000000000 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 b9 ff ff ff ff ff 	movabs rcx,0xfffffffffffffff
   b:	ff ff 0f 
   e:	41 57                	push   r15
  10:	41 56                	push   r14
  12:	41 55                	push   r13
  14:	41 54                	push   r12
  16:	55                   	push   rbp
  17:	53                   	push   rbx
  18:	48 83 ec 18          	sub    rsp,0x18
  1c:	48 8b 6f 08          	mov    rbp,QWORD PTR [rdi+0x8]
  20:	4c 8b 37             	mov    r14,QWORD PTR [rdi]
  23:	48 89 e8             	mov    rax,rbp
  26:	4c 29 f0             	sub    rax,r14
  29:	48 c1 f8 03          	sar    rax,0x3
  2d:	48 39 c8             	cmp    rax,rcx
  30:	0f 84 20 01 00 00    	je     156 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x156>
  36:	48 89 f3             	mov    rbx,rsi
  39:	49 89 fc             	mov    r12,rdi
  3c:	4c 29 f6             	sub    rsi,r14
  3f:	48 85 c0             	test   rax,rax
  42:	0f 84 f0 00 00 00    	je     138 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x138>
  48:	49 bf f8 ff ff ff ff 	movabs r15,0x7ffffffffffffff8
  4f:	ff ff 7f 
  52:	48 8d 3c 00          	lea    rdi,[rax+rax*1]
  56:	48 39 f8             	cmp    rax,rdi
  59:	0f 86 c1 00 00 00    	jbe    120 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x120>
  5f:	4c 89 ff             	mov    rdi,r15
  62:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
  67:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
  6b:	e8 00 00 00 00       	call   70 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x70>
  70:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  74:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
  79:	49 89 c5             	mov    r13,rax
  7c:	49 01 c7             	add    r15,rax
  7f:	48 8d 40 08          	lea    rax,[rax+0x8]
  83:	48 8b 12             	mov    rdx,QWORD PTR [rdx]
  86:	49 89 54 35 00       	mov    QWORD PTR [r13+rsi*1+0x0],rdx
  8b:	4c 39 f3             	cmp    rbx,r14
  8e:	74 33                	je     c3 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xc3>
  90:	4c 89 e9             	mov    rcx,r13
  93:	4c 89 f2             	mov    rdx,r14
  96:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
  9d:	00 00 00 
  a0:	8b 02                	mov    eax,DWORD PTR [rdx]
  a2:	8b 72 04             	mov    esi,DWORD PTR [rdx+0x4]
  a5:	48 83 c2 08          	add    rdx,0x8
  a9:	48 83 c1 08          	add    rcx,0x8
  ad:	89 41 f8             	mov    DWORD PTR [rcx-0x8],eax
  b0:	89 71 fc             	mov    DWORD PTR [rcx-0x4],esi
  b3:	48 39 d3             	cmp    rbx,rdx
  b6:	75 e8                	jne    a0 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xa0>
  b8:	48 89 d8             	mov    rax,rbx
  bb:	4c 29 f0             	sub    rax,r14
  be:	49 8d 44 05 08       	lea    rax,[r13+rax*1+0x8]
  c3:	48 39 eb             	cmp    rbx,rbp
  c6:	74 26                	je     ee <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xee>
  c8:	48 89 da             	mov    rdx,rbx
  cb:	48 89 c1             	mov    rcx,rax
  ce:	66 90                	xchg   ax,ax
  d0:	8b 72 04             	mov    esi,DWORD PTR [rdx+0x4]
  d3:	8b 3a                	mov    edi,DWORD PTR [rdx]
  d5:	48 83 c2 08          	add    rdx,0x8
  d9:	48 83 c1 08          	add    rcx,0x8
  dd:	89 79 f8             	mov    DWORD PTR [rcx-0x8],edi
  e0:	89 71 fc             	mov    DWORD PTR [rcx-0x4],esi
  e3:	48 39 ea             	cmp    rdx,rbp
  e6:	75 e8                	jne    d0 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xd0>
  e8:	48 29 da             	sub    rdx,rbx
  eb:	48 01 d0             	add    rax,rdx
  ee:	4d 85 f6             	test   r14,r14
  f1:	74 10                	je     103 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x103>
  f3:	4c 89 f7             	mov    rdi,r14
  f6:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  fa:	e8 00 00 00 00       	call   ff <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xff>
  ff:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
 103:	4d 89 2c 24          	mov    QWORD PTR [r12],r13
 107:	49 89 44 24 08       	mov    QWORD PTR [r12+0x8],rax
 10c:	4d 89 7c 24 10       	mov    QWORD PTR [r12+0x10],r15
 111:	48 83 c4 18          	add    rsp,0x18
 115:	5b                   	pop    rbx
 116:	5d                   	pop    rbp
 117:	41 5c                	pop    r12
 119:	41 5d                	pop    r13
 11b:	41 5e                	pop    r14
 11d:	41 5f                	pop    r15
 11f:	c3                   	ret
 120:	48 85 ff             	test   rdi,rdi
 123:	75 1e                	jne    143 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x143>
 125:	b8 08 00 00 00       	mov    eax,0x8
 12a:	45 31 ff             	xor    r15d,r15d
 12d:	45 31 ed             	xor    r13d,r13d
 130:	e9 4e ff ff ff       	jmp    83 <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x83>
 135:	0f 1f 00             	nop    DWORD PTR [rax]
 138:	41 bf 08 00 00 00    	mov    r15d,0x8
 13e:	e9 1c ff ff ff       	jmp    5f <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x5f>
 143:	48 39 cf             	cmp    rdi,rcx
 146:	48 0f 46 cf          	cmovbe rcx,rdi
 14a:	49 89 cf             	mov    r15,rcx
 14d:	49 c1 e7 03          	shl    r15,0x3
 151:	e9 09 ff ff ff       	jmp    5f <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x5f>
 156:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 15d <_ZNSt6vectorISt4pairIiiESaIS1_EE17_M_realloc_insertIJS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x15d>
 15d:	e8 00 00 00 00       	call   162 <.LC19+0x5a>

Disassembly of section .text._ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_:

0000000000000000 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 b9 ff ff ff ff ff 	movabs rcx,0xfffffffffffffff
   b:	ff ff 0f 
   e:	41 57                	push   r15
  10:	41 56                	push   r14
  12:	41 55                	push   r13
  14:	41 54                	push   r12
  16:	55                   	push   rbp
  17:	53                   	push   rbx
  18:	48 83 ec 18          	sub    rsp,0x18
  1c:	48 8b 6f 08          	mov    rbp,QWORD PTR [rdi+0x8]
  20:	4c 8b 37             	mov    r14,QWORD PTR [rdi]
  23:	48 89 e8             	mov    rax,rbp
  26:	4c 29 f0             	sub    rax,r14
  29:	48 c1 f8 03          	sar    rax,0x3
  2d:	48 39 c8             	cmp    rax,rcx
  30:	0f 84 2c 01 00 00    	je     162 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x162>
  36:	48 89 f3             	mov    rbx,rsi
  39:	49 89 fc             	mov    r12,rdi
  3c:	4c 29 f6             	sub    rsi,r14
  3f:	48 85 c0             	test   rax,rax
  42:	0f 84 f8 00 00 00    	je     140 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x140>
  48:	49 bf f8 ff ff ff ff 	movabs r15,0x7ffffffffffffff8
  4f:	ff ff 7f 
  52:	48 8d 3c 00          	lea    rdi,[rax+rax*1]
  56:	48 39 f8             	cmp    rax,rdi
  59:	0f 86 c9 00 00 00    	jbe    128 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x128>
  5f:	4c 89 ff             	mov    rdi,r15
  62:	48 89 54 24 08       	mov    QWORD PTR [rsp+0x8],rdx
  67:	48 89 34 24          	mov    QWORD PTR [rsp],rsi
  6b:	e8 00 00 00 00       	call   70 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x70>
  70:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  74:	48 8b 54 24 08       	mov    rdx,QWORD PTR [rsp+0x8]
  79:	49 89 c5             	mov    r13,rax
  7c:	4a 8d 04 38          	lea    rax,[rax+r15*1]
  80:	4d 8d 7d 08          	lea    r15,[r13+0x8]
  84:	48 8b 0a             	mov    rcx,QWORD PTR [rdx]
  87:	48 c7 02 00 00 00 00 	mov    QWORD PTR [rdx],0x0
  8e:	49 89 4c 35 00       	mov    QWORD PTR [r13+rsi*1+0x0],rcx
  93:	4c 39 f3             	cmp    rbx,r14
  96:	74 2e                	je     c6 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xc6>
  98:	4c 89 e9             	mov    rcx,r13
  9b:	4c 89 f2             	mov    rdx,r14
  9e:	66 90                	xchg   ax,ax
  a0:	48 c7 01 00 00 00 00 	mov    QWORD PTR [rcx],0x0
  a7:	48 8b 32             	mov    rsi,QWORD PTR [rdx]
  aa:	48 83 c2 08          	add    rdx,0x8
  ae:	48 83 c1 08          	add    rcx,0x8
  b2:	48 89 71 f8          	mov    QWORD PTR [rcx-0x8],rsi
  b6:	48 39 d3             	cmp    rbx,rdx
  b9:	75 e5                	jne    a0 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xa0>
  bb:	48 89 da             	mov    rdx,rbx
  be:	4c 29 f2             	sub    rdx,r14
  c1:	4d 8d 7c 15 08       	lea    r15,[r13+rdx*1+0x8]
  c6:	48 39 eb             	cmp    rbx,rbp
  c9:	74 27                	je     f2 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xf2>
  cb:	48 89 da             	mov    rdx,rbx
  ce:	4c 89 f9             	mov    rcx,r15
  d1:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
  d8:	48 8b 32             	mov    rsi,QWORD PTR [rdx]
  db:	48 83 c2 08          	add    rdx,0x8
  df:	48 83 c1 08          	add    rcx,0x8
  e3:	48 89 71 f8          	mov    QWORD PTR [rcx-0x8],rsi
  e7:	48 39 ea             	cmp    rdx,rbp
  ea:	75 ec                	jne    d8 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xd8>
  ec:	48 29 da             	sub    rdx,rbx
  ef:	49 01 d7             	add    r15,rdx
  f2:	4d 85 f6             	test   r14,r14
  f5:	74 10                	je     107 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x107>
  f7:	4c 89 f7             	mov    rdi,r14
  fa:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  fe:	e8 00 00 00 00       	call   103 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x103>
 103:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
 107:	4d 89 2c 24          	mov    QWORD PTR [r12],r13
 10b:	4d 89 7c 24 08       	mov    QWORD PTR [r12+0x8],r15
 110:	49 89 44 24 10       	mov    QWORD PTR [r12+0x10],rax
 115:	48 83 c4 18          	add    rsp,0x18
 119:	5b                   	pop    rbx
 11a:	5d                   	pop    rbp
 11b:	41 5c                	pop    r12
 11d:	41 5d                	pop    r13
 11f:	41 5e                	pop    r14
 121:	41 5f                	pop    r15
 123:	c3                   	ret
 124:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 128:	48 85 ff             	test   rdi,rdi
 12b:	75 1e                	jne    14b <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x14b>
 12d:	41 bf 08 00 00 00    	mov    r15d,0x8
 133:	31 c0                	xor    eax,eax
 135:	45 31 ed             	xor    r13d,r13d
 138:	e9 47 ff ff ff       	jmp    84 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x84>
 13d:	0f 1f 00             	nop    DWORD PTR [rax]
 140:	41 bf 08 00 00 00    	mov    r15d,0x8
 146:	e9 14 ff ff ff       	jmp    5f <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x5f>
 14b:	48 39 cf             	cmp    rdi,rcx
 14e:	48 89 c8             	mov    rax,rcx
 151:	48 0f 46 c7          	cmovbe rax,rdi
 155:	4c 8d 3c c5 00 00 00 	lea    r15,[rax*8+0x0]
 15c:	00 
 15d:	e9 fd fe ff ff       	jmp    5f <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x5f>
 162:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 169 <_ZNSt6vectorISt6threadSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x169>
 169:	e8 00 00 00 00       	call   16e <.LC19+0x66>

Disassembly of section .text._ZNSt6vectorISt6threadSaIS0_EE12emplace_backIJS0_EEEvDpOT_:

0000000000000000 <_ZNSt6vectorISt6threadSaIS0_EE12emplace_backIJS0_EEEvDpOT_>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 89 f2             	mov    rdx,rsi
   7:	48 8b 77 08          	mov    rsi,QWORD PTR [rdi+0x8]
   b:	48 3b 77 10          	cmp    rsi,QWORD PTR [rdi+0x10]
   f:	74 1f                	je     30 <_ZNSt6vectorISt6threadSaIS0_EE12emplace_backIJS0_EEEvDpOT_+0x30>
  11:	48 c7 06 00 00 00 00 	mov    QWORD PTR [rsi],0x0
  18:	48 8b 02             	mov    rax,QWORD PTR [rdx]
  1b:	48 83 c6 08          	add    rsi,0x8
  1f:	48 c7 02 00 00 00 00 	mov    QWORD PTR [rdx],0x0
  26:	48 89 46 f8          	mov    QWORD PTR [rsi-0x8],rax
  2a:	48 89 77 08          	mov    QWORD PTR [rdi+0x8],rsi
  2e:	c3                   	ret
  2f:	90                   	nop
  30:	e9 00 00 00 00       	jmp    35 <.LC8+0x1>

Disassembly of section .text.startup:

0000000000000000 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L>:
   0:	f3 0f 1e fa          	endbr64
   4:	48 83 ec 08          	sub    rsp,0x8
   8:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # f <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0xf>
   f:	e8 00 00 00 00       	call   14 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x14>
  14:	48 8b 3d 00 00 00 00 	mov    rdi,QWORD PTR [rip+0x0]        # 1b <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x1b>
  1b:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 22 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x22>
  22:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 29 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x29>
  29:	e8 00 00 00 00       	call   2e <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x2e>
  2e:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 35 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x35>
  35:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 3c <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x3c>
  3c:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 47 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x47>
  43:	00 00 00 00 
  47:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 4e <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x4e>
  4e:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 59 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x59>
  55:	00 00 00 00 
  59:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 64 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x64>
  60:	00 00 00 00 
  64:	e8 00 00 00 00       	call   69 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x69>
  69:	48 8d 15 00 00 00 00 	lea    rdx,[rip+0x0]        # 70 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x70>
  70:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 7b <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x7b>
  77:	00 00 00 00 
  7b:	48 8d 35 00 00 00 00 	lea    rsi,[rip+0x0]        # 82 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x82>
  82:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 8d <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x8d>
  89:	00 00 00 00 
  8d:	48 8d 3d 00 00 00 00 	lea    rdi,[rip+0x0]        # 94 <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x94>
  94:	48 c7 05 00 00 00 00 	mov    QWORD PTR [rip+0x0],0x0        # 9f <_GLOBAL__sub_I_ZEFFG33RH2U8HH2_5kk2L+0x9f>
  9b:	00 00 00 00 
  9f:	48 83 c4 08          	add    rsp,0x8
  a3:	e9 00 00 00 00       	jmp    a8 <.LC15>

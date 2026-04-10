#define VRAM 0x06000000

int
main(void)
{
    *(unsigned int*)0x04000000 = 0x0403;

    ((unsigned short*) 0x06000000)[120+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[121+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[122+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[123+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[124+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[125+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[126+80*240] = 0x101F;
    ((unsigned short*) 0x06000000)[136+80*240] = 0x03E0;
    ((unsigned short*) 0x06000000)[120+96*240] = 0x7C00;

    while(1)
		{
			;
		}

    return 0;
}

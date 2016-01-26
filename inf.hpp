#include <stdlib.h>
#include <string>

#define SIZE_INT	sizeof((int)NULL)
#define SIZE_LONG	sizeof((long)NULL)

class inf
{
	private:
		size_t size;
		char* ptr = NULL;
		
	public:
//		inf(const int i) { ptr = (char*)malloc(SIZE_INT); size = SIZE_INT; (int&)ptr = i; }	// TODO: UNSIGNED ONLY FOR NOW!
//		inf(const unsigned int i) { ptr = (char*)malloc(SIZE_INT); size = SIZE_INT; (unsigned int&)ptr = i; }
		inf(const long i = 0) { ptr = (char*)malloc(SIZE_LONG); size = SIZE_LONG; (long&)ptr = i; }	// TODO: UNSIGNED ONLY FOR NOW!
		inf(const unsigned long i) { ptr = (char*)malloc(SIZE_LONG); size = SIZE_LONG; (unsigned long&)ptr = i; }
		inf(const inf& i) { set(i); }
		
//		~inf(){ free(ptr); } // Seems like i dont need that. Why? Shouldn't I free malloc()ed memory?
		
//		inf operator = (const int i) { return inf(i); }
//		inf operator = (const unsigned int i) { return inf(i); }
		inf operator = (const long i) { return inf(i); }
		inf operator = (const unsigned long i) { return inf(i); }
		inf operator = (const inf& i) { inf ret = 0; ret.set(i); return ret; }
		
		void set(inf i)
		{
			if(size != i.getSize()) 
			{
				size = i.getSize();
				if (ptr != NULL) ptr = (char*)realloc(ptr, size);
				else             ptr = (char*)malloc(size);
			}
			char* iptr = i.getPtr();
			for(unsigned long s = 0; s < size; s++)
			{
				ptr[s] = iptr[s];
			}
		}
		
		inf operator + (inf i)
		{
			inf ret = 0;
			
			//TODO: Implement
			
			return ret;
		}
		
		void operator += (inf i)
		{
			
		}
		
		void operator ++ ()
		{
			
		}
		
		inf operator - (inf i)
		{
			
		}
		
		void operator -= (inf i)
		{
			
		}
		
		void operator -- ()
		{
			
		}
		
		//TODO: Implement mutiplication, division, powering, log, etc.
		
		size_t getSize() { return size; };
		char* getPtr() { return ptr; };
		
		void setSize(size_t s)
		{
			size = s;
			realloc(ptr, size);
		}
		
		unsigned long toLong() { return (unsigned long&)ptr; }
		unsigned int toInt() { return (unsigned int&)ptr; }
		
		std::string toString(const unsigned char base)
		{
			return "HOHOHO (TODO)";	//TODO: Return real string!
		}
};

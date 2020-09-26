//Developed by Abraham Fikremaryam, From Computer Science Department (1st Year Student) ....
//Data created on June 2018 ...
#ifndef ABSTRING_H
#define ABSTRING_H
typedef int def__CHAR_TO_INT____CONVERSION;
namespace doc__for__all_common
{
  static const def__CHAR_TO_INT____CONVERSION size_ANY__CONST___CHARACTERS=32;
  static const def__CHAR_TO_INT____CONVERSION normal_BY____DEFAULT=0;
}
int NEXT_MOVEMENT___FORCOUNTING__=0,COUNT__TYPIN_CASTING_OF_VALUES=0;
int COUNT_ANY_VALUESWITHINADDRESSOF_A_VALUE=NEXT_MOVEMENT___FORCOUNTING__;
template <typename length>
def__CHAR_TO_INT____CONVERSION ablen(length value) // ab string length
{
	if(*value)
	{
		COUNT_ANY_VALUESWITHINADDRESSOF_A_VALUE++;
		ablen(value+1);
	}
	else
	  return COUNT_ANY_VALUESWITHINADDRESSOF_A_VALUE;
}
char* abcpy(const char* s1,  const char* s2) // ab string copying
{
	def__CHAR_TO_INT____CONVERSION strs2=ablen(s2);
	def__CHAR_TO_INT____CONVERSION strs1=ablen(s1);
	  char* CONVERSION___OF_S1__=new char[1000];
	  char* CONVERSION___OF_S2__=new char[1000];	
	    for(int i=0; i<strs1; i++)
	      CONVERSION___OF_S1__[i]=reinterpret_cast<char>(s1[i]);
	    for(int j=0; j<strs2; j++)
	      CONVERSION___OF_S2__[j]=reinterpret_cast<char>(s2[j]);
	    for(int k=0; k<strs2; k++)
	      CONVERSION___OF_S1__[k]=CONVERSION___OF_S2__[k];
	    return CONVERSION___OF_S1__;
	     delete [] CONVERSION___OF_S1__;
	     delete [] CONVERSION___OF_S2__;
} 
template<class receive, class send, typename character>
char* abncpy(receive s1,  send s2, character n=0) // ab string copying with a specific user character length
{
	def__CHAR_TO_INT____CONVERSION strs2=ablen(s2);
	def__CHAR_TO_INT____CONVERSION strs1=ablen(s1);
	  char* CONVERSION___OF_S1__N=new char[1000];
	  char* CONVERSION___OF_S2__N=new char[1000];	
	    for(int i=0; i<strs1; i++)
	       CONVERSION___OF_S1__N[i]=reinterpret_cast<char>(s1[i]);
	    for(int j=0; j<strs2; j++)
	       CONVERSION___OF_S2__N[j]=reinterpret_cast<char>(s2[j]);
	    for(int k=0; k<n; k++)
	       CONVERSION___OF_S1__N[k]=CONVERSION___OF_S2__N[k];
	         return CONVERSION___OF_S1__N;
	     delete [] CONVERSION___OF_S1__N;
	     delete [] CONVERSION___OF_S2__N;
}
template<class first, class second>
char* abcat(first s1,  second s2)   // ab string concatination
{
    def__CHAR_TO_INT____CONVERSION strs1=ablen(s1);
    def__CHAR_TO_INT____CONVERSION strs2=ablen(s2);
    char* EXTEND__VALUE_OF_S1__SIZE= new char[strs1+strs2];
    for(int i=0; i<strs1; i++)
        EXTEND__VALUE_OF_S1__SIZE[i]=s1[i];
    for(int j=0; j<strs2; j++)
        EXTEND__VALUE_OF_S1__SIZE[strs1+j]=s2[j];
       return EXTEND__VALUE_OF_S1__SIZE;
       delete [] EXTEND__VALUE_OF_S1__SIZE;
}
def__CHAR_TO_INT____CONVERSION abcmp(const char* s1, const char* s2) // ab string comparison with case sensetivity
{
    def__CHAR_TO_INT____CONVERSION str_s1=ablen(s1); def__CHAR_TO_INT____CONVERSION str_s2=ablen(s2);
	static char * COPY__V_OF_ACONSTANT_STRING1_= new char [1000]; 
	static char * COPY__V_OF_ACONSTANT_STRING2_=new char [1000];
	for(static int i=0; i<str_s1; i++)
	     COPY__V_OF_ACONSTANT_STRING1_[i]=reinterpret_cast<char>(s1[i]);
	for(static int j=0; j<str_s2; j++)
	    COPY__V_OF_ACONSTANT_STRING2_[j]=reinterpret_cast<char>(s2[j]);
	if(int(COPY__V_OF_ACONSTANT_STRING1_[COUNT__TYPIN_CASTING_OF_VALUES])>int(COPY__V_OF_ACONSTANT_STRING2_[COUNT__TYPIN_CASTING_OF_VALUES])) return 1;		
	else if(int(COPY__V_OF_ACONSTANT_STRING1_[COUNT__TYPIN_CASTING_OF_VALUES])==int(COPY__V_OF_ACONSTANT_STRING2_[COUNT__TYPIN_CASTING_OF_VALUES]))
	{      
	      if(COPY__V_OF_ACONSTANT_STRING1_[COUNT__TYPIN_CASTING_OF_VALUES]='\0' || COPY__V_OF_ACONSTANT_STRING2_[COUNT__TYPIN_CASTING_OF_VALUES]!='\0')
	         {
		       COUNT__TYPIN_CASTING_OF_VALUES++;
		       return abcmp(s1,s2);
           	 }		   
		  else return 0;
	}
	 else return -1; 	
	 delete [] COPY__V_OF_ACONSTANT_STRING1_;
	 delete [] COPY__V_OF_ACONSTANT_STRING2_;
}
def__CHAR_TO_INT____CONVERSION abcmpi(const char* s1, const char* s2) // ab string comparison without case sensetivity
{	 	
    def__CHAR_TO_INT____CONVERSION str_s1_i=ablen(s1); def__CHAR_TO_INT____CONVERSION str_s2_i=ablen(s2);
	static char * COPY__V_OF_ACONSTANT_STRING1_i_= new char [1000]; 
	static char * COPY__V_OF_ACONSTANT_STRING2_i_=new char [1000];
	for(static int i=0; i<str_s1_i; i++)
	     COPY__V_OF_ACONSTANT_STRING1_i_[i]=reinterpret_cast<char>(s1[i]);
	for(static int j=0; j<str_s2_i; j++)
	    COPY__V_OF_ACONSTANT_STRING2_i_[j]=reinterpret_cast<char>(s2[j]);
	if(def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__])==def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]))
	{      
	      if(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__]='\0' ||COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]!='\0')
	         {
		       NEXT_MOVEMENT___FORCOUNTING__++;
		       return abcmpi(s1,s2);
           	 }		   
		  else return 0;
	}
	else if((COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__]+doc__for__all_common::size_ANY__CONST___CHARACTERS)==(COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]))
	{      
	      if(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__]='\0' || COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]!='\0')
	         {
		       NEXT_MOVEMENT___FORCOUNTING__++;
		       return abcmpi(s1,s2);
           	 }		   
		  else return 0;
	}
	else if(def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__]-doc__for__all_common::size_ANY__CONST___CHARACTERS)==def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]))
	{      
	      if(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__]='\0' || COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__]!='\0')
	         {
		       NEXT_MOVEMENT___FORCOUNTING__++;
		       return abcmpi(s1,s2);
           	 }		   
		  else return 0;
	}
	else if(def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING1_i_[NEXT_MOVEMENT___FORCOUNTING__])>def__CHAR_TO_INT____CONVERSION(COPY__V_OF_ACONSTANT_STRING2_i_[NEXT_MOVEMENT___FORCOUNTING__])) return 1;	
	else return -1; 	
	delete [] COPY__V_OF_ACONSTANT_STRING1_i_;
	delete [] COPY__V_OF_ACONSTANT_STRING2_i_;
}
template<typename convert_upper>
char* ablwr(convert_upper s1) // ab string changing a capital letter to lowercase
{
	def__CHAR_TO_INT____CONVERSION strs1=ablen(s1);
	  char* CONVERSION___OF_S1__LWR_CASE=new char[1000];	
	    for(int i=0; i<strs1; i++)
	      CONVERSION___OF_S1__LWR_CASE[i]=reinterpret_cast<char>(s1[i]);
	  for(int J=0; J<strs1; J++)
		  def__CHAR_TO_INT____CONVERSION(*(CONVERSION___OF_S1__LWR_CASE+J));
	 for(int K=0; K<strs1; K++)
	 {
	 	if(*(CONVERSION___OF_S1__LWR_CASE+K)==' ')
	 	     *(CONVERSION___OF_S1__LWR_CASE+K)=doc__for__all_common::size_ANY__CONST___CHARACTERS;
	 	else if(*(CONVERSION___OF_S1__LWR_CASE+K)>=65 &&*(CONVERSION___OF_S1__LWR_CASE+K)<=90 )
	 	        *(CONVERSION___OF_S1__LWR_CASE+K)+=doc__for__all_common::size_ANY__CONST___CHARACTERS;
	 	else if(*(CONVERSION___OF_S1__LWR_CASE+K)>=97 &&*(CONVERSION___OF_S1__LWR_CASE+K)<=122 )
	 	        *(CONVERSION___OF_S1__LWR_CASE+K)+=doc__for__all_common::normal_BY____DEFAULT;
	 	else
	 	     *(CONVERSION___OF_S1__LWR_CASE+K)+=doc__for__all_common::normal_BY____DEFAULT;
	 }
	 for(int Z=0; Z<strs1; Z++)
	       char(*(CONVERSION___OF_S1__LWR_CASE+Z));
              return CONVERSION___OF_S1__LWR_CASE;	
		delete [] CONVERSION___OF_S1__LWR_CASE; 	        
} 
template<typename convert_lower>
char* abupr(convert_lower s1) // ab string changing small later to capital later or uppercase
{	 	
      def__CHAR_TO_INT____CONVERSION strs1=ablen(s1);
	  char* CONVERSION___OF_S1___UPR_CASE=new char[1000];	
	    for(int i=0; i<strs1; i++)
	      CONVERSION___OF_S1___UPR_CASE[i]=reinterpret_cast<char>(s1[i]);
	  for(int J=0; J<strs1; J++)
		  def__CHAR_TO_INT____CONVERSION(*(CONVERSION___OF_S1___UPR_CASE+J));
	 for(int K=0; K<strs1; K++)
	 {
	 	if(*(CONVERSION___OF_S1___UPR_CASE+K)==' ')
	 	     *(CONVERSION___OF_S1___UPR_CASE+K)=doc__for__all_common::size_ANY__CONST___CHARACTERS;
	 	else if(*(CONVERSION___OF_S1___UPR_CASE+K)>=65 &&*(CONVERSION___OF_S1___UPR_CASE+K)<=90 )
	 	     *(CONVERSION___OF_S1___UPR_CASE+K)+=doc__for__all_common::normal_BY____DEFAULT;
	 	else if(*(CONVERSION___OF_S1___UPR_CASE+K)>=97 &&*(CONVERSION___OF_S1___UPR_CASE+K)<=122 )
	 	     *(CONVERSION___OF_S1___UPR_CASE+K)-=doc__for__all_common::size_ANY__CONST___CHARACTERS;
	 	else
	 	     *(CONVERSION___OF_S1___UPR_CASE+K)+=doc__for__all_common::normal_BY____DEFAULT;
	 }
	 for(int Z=0; Z<strs1; Z++)
	       char(*(CONVERSION___OF_S1___UPR_CASE+Z));
              return CONVERSION___OF_S1___UPR_CASE;
              delete [] CONVERSION___OF_S1___UPR_CASE;
} 
template<typename check_z_alphabet>
bool abisalpha(check_z_alphabet s1) // ab string checking whether the character is alphabetic or not
{
	  if(int(s1)>64 || int(s1)<=90 || int(s1)>=97 || int(s1)<=122)
	  {
	  	  return true;
	  }
	  else return false;
} 
template<typename check_z_punctuation>
bool abispunc(check_z_punctuation s1) // ab string checking whether the character is punctuation or not
{
	if(int(s1)>=32 || int(s1)<=64 || int(s1)>=91 || int(s1)<=96 || int(s1)>=123) return true;
	  else return false;
}
#endif

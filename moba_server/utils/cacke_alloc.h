#ifndef __CACKE_ALLOC_H
#define __CACKE_ALLOC_H

#ifdef __cplusplus
extern "C"
{
#endif
	//��ʼ��һ��ָ�������Ͷδ�С���ڴ��
	struct cache_allocer* create_cache_allocer(int capacity,int elem_size);//�������ڴ浥Ԫ��С
	void destroy_cache_allocer(struct cache_allocer* allocer);
	//���ڴ���з���һ���ڴ�
	void* cache_alloc(struct cache_allocer* allocer,int elem_size);
	void cache_free(struct cache_allocer* allocer,void* mem);
#ifdef __cplusplus
}
#endif
#endif
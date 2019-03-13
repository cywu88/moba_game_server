﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//实现普通的单例模式
//where限制模板的类型，new()指的是这个类型必须要能被实例化
public abstract class Singletom<T> where T :new()
{
	private static T _instance;
	private static object mutex = new object();
	public static T Instance
	{
		get
		{
			if(_instance == null)
			{
				lock(mutex)//保证线程安全
				{
					if(_instance == null)
					{
						_instance = new T();
					}
				}
			}
			return _instance;
		}
	}
}


//Unity单例,如Monobeavior,声音，网络...
public class UnitySingletom<T> : MonoBehaviour where T : Component
{
	private static T _instance;
	public static T Instance
	{
		get
		{
			if(_instance == null)
			{
				_instance = FindObjectOfType(typeof(T)) as T;
				if(_instance == null)
				{
					GameObject obj = new GameObject();
					_instance = (T)obj.AddComponent(typeof(T));
					obj.hideFlags = HideFlags.DontSave;
					obj.name = typeof(T).Name;
				}
			}
			return _instance;
		}
	}
	public virtual void Awake()
	{
		DontDestroyOnLoad(this.gameObject);
		if(_instance == null)
		{
			_instance = this as T;
		}
		else
		{
			GameObject.Destroy(this.gameObject);
		}
	}
}

# 1. Import libraries and load dataset
from sklearn.datasets import load_iris
from sklearn.cluster import KMeans

data=load_iris()
X=data.data
y=data.target

kmeans=KMeans(n_clusters=3,random_state=0)
kmeans.fit(X)

print("Label: \n",kmeans.labels_)
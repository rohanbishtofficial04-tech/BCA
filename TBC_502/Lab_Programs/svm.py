from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn.metrics import accuracy_score
from sklearn.tree import DecisionTreeClassifier

#load dataset
data=load_wine()
X=data.data
y=data.target

# test train split
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)

#implement model
svm=SVC(kernel='linear')
svm.fit(X_train,y_train)

dt=DecisionTreeClassifier()
dt.fit(X_train,y_train)

#predict
svm_pred=svm.predict(X_test)
print("Accuracy:  ",accuracy_score(y_test,svm_pred))

dt_pred=dt.predict(X_test)
print("Accuracy:  ",accuracy_score(y_test,dt_pred))


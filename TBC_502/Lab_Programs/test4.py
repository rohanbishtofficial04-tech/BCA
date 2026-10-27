from sklearn.datasets import fetch_california_housing
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error,r2_score
import warnings 
warnings.filterwarnings("ignore")

data=fetch_california_housing()
X=data.data
y=data.target

X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)

lr=LinearRegression()
lr.fit(X_train,y_train)

lr_pred=lr.predict(X_test)

print("MSE: ",mean_squared_error(y_test,lr_pred))
print("R2 score: ",r2_score(y_test,lr_pred))